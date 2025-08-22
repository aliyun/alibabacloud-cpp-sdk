// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSPECINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSPECINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnSecSpecInfoResponseBodySpecInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSecSpecInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSecSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpecInfos, specInfos_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSecSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpecInfos, specInfos_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeDcdnSecSpecInfoResponseBody() = default ;
    DescribeDcdnSecSpecInfoResponseBody(const DescribeDcdnSecSpecInfoResponseBody &) = default ;
    DescribeDcdnSecSpecInfoResponseBody(DescribeDcdnSecSpecInfoResponseBody &&) = default ;
    DescribeDcdnSecSpecInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSecSpecInfoResponseBody() = default ;
    DescribeDcdnSecSpecInfoResponseBody& operator=(const DescribeDcdnSecSpecInfoResponseBody &) = default ;
    DescribeDcdnSecSpecInfoResponseBody& operator=(DescribeDcdnSecSpecInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->specInfos_ != nullptr && this->version_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnSecSpecInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specInfos Field Functions 
    bool hasSpecInfos() const { return this->specInfos_ != nullptr;};
    void deleteSpecInfos() { this->specInfos_ = nullptr;};
    inline const vector<DescribeDcdnSecSpecInfoResponseBodySpecInfos> & specInfos() const { DARABONBA_PTR_GET_CONST(specInfos_, vector<DescribeDcdnSecSpecInfoResponseBodySpecInfos>) };
    inline vector<DescribeDcdnSecSpecInfoResponseBodySpecInfos> specInfos() { DARABONBA_PTR_GET(specInfos_, vector<DescribeDcdnSecSpecInfoResponseBodySpecInfos>) };
    inline DescribeDcdnSecSpecInfoResponseBody& setSpecInfos(const vector<DescribeDcdnSecSpecInfoResponseBodySpecInfos> & specInfos) { DARABONBA_PTR_SET_VALUE(specInfos_, specInfos) };
    inline DescribeDcdnSecSpecInfoResponseBody& setSpecInfos(vector<DescribeDcdnSecSpecInfoResponseBodySpecInfos> && specInfos) { DARABONBA_PTR_SET_RVALUE(specInfos_, specInfos) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeDcdnSecSpecInfoResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The code and configurations of the security rules.
    std::shared_ptr<vector<DescribeDcdnSecSpecInfoResponseBodySpecInfos>> specInfos_ = nullptr;
    // The version of secure DCDN.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
