// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSPECINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSPECINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafSpecInfoResponseBodySpecInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafSpecInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpecInfos, specInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpecInfos, specInfos_);
    };
    DescribeDcdnWafSpecInfoResponseBody() = default ;
    DescribeDcdnWafSpecInfoResponseBody(const DescribeDcdnWafSpecInfoResponseBody &) = default ;
    DescribeDcdnWafSpecInfoResponseBody(DescribeDcdnWafSpecInfoResponseBody &&) = default ;
    DescribeDcdnWafSpecInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafSpecInfoResponseBody() = default ;
    DescribeDcdnWafSpecInfoResponseBody& operator=(const DescribeDcdnWafSpecInfoResponseBody &) = default ;
    DescribeDcdnWafSpecInfoResponseBody& operator=(DescribeDcdnWafSpecInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edition_ != nullptr
        && this->requestId_ != nullptr && this->specInfos_ != nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeDcdnWafSpecInfoResponseBody& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafSpecInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specInfos Field Functions 
    bool hasSpecInfos() const { return this->specInfos_ != nullptr;};
    void deleteSpecInfos() { this->specInfos_ = nullptr;};
    inline const vector<DescribeDcdnWafSpecInfoResponseBodySpecInfos> & specInfos() const { DARABONBA_PTR_GET_CONST(specInfos_, vector<DescribeDcdnWafSpecInfoResponseBodySpecInfos>) };
    inline vector<DescribeDcdnWafSpecInfoResponseBodySpecInfos> specInfos() { DARABONBA_PTR_GET(specInfos_, vector<DescribeDcdnWafSpecInfoResponseBodySpecInfos>) };
    inline DescribeDcdnWafSpecInfoResponseBody& setSpecInfos(const vector<DescribeDcdnWafSpecInfoResponseBodySpecInfos> & specInfos) { DARABONBA_PTR_SET_VALUE(specInfos_, specInfos) };
    inline DescribeDcdnWafSpecInfoResponseBody& setSpecInfos(vector<DescribeDcdnWafSpecInfoResponseBodySpecInfos> && specInfos) { DARABONBA_PTR_SET_RVALUE(specInfos_, specInfos) };


  protected:
    // The version of WAF.
    std::shared_ptr<string> edition_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The supported types of protection policies and the configuration information of protection rules.
    std::shared_ptr<vector<DescribeDcdnWafSpecInfoResponseBodySpecInfos>> specInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
