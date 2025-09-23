// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSTRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSTRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDDoSTrafficResponseBodyDDoSTrafficPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDDoSTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DDoSTrafficPoints, DDoSTrafficPoints_);
      DARABONBA_PTR_TO_JSON(DefenseInBytes, defenseInBytes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceInBytes, sourceInBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DDoSTrafficPoints, DDoSTrafficPoints_);
      DARABONBA_PTR_FROM_JSON(DefenseInBytes, defenseInBytes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceInBytes, sourceInBytes_);
    };
    DescribeDDoSTrafficResponseBody() = default ;
    DescribeDDoSTrafficResponseBody(const DescribeDDoSTrafficResponseBody &) = default ;
    DescribeDDoSTrafficResponseBody(DescribeDDoSTrafficResponseBody &&) = default ;
    DescribeDDoSTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSTrafficResponseBody() = default ;
    DescribeDDoSTrafficResponseBody& operator=(const DescribeDDoSTrafficResponseBody &) = default ;
    DescribeDDoSTrafficResponseBody& operator=(DescribeDDoSTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DDoSTrafficPoints_ != nullptr
        && this->defenseInBytes_ != nullptr && this->requestId_ != nullptr && this->sourceInBytes_ != nullptr; };
    // DDoSTrafficPoints Field Functions 
    bool hasDDoSTrafficPoints() const { return this->DDoSTrafficPoints_ != nullptr;};
    void deleteDDoSTrafficPoints() { this->DDoSTrafficPoints_ = nullptr;};
    inline const vector<DescribeDDoSTrafficResponseBodyDDoSTrafficPoints> & DDoSTrafficPoints() const { DARABONBA_PTR_GET_CONST(DDoSTrafficPoints_, vector<DescribeDDoSTrafficResponseBodyDDoSTrafficPoints>) };
    inline vector<DescribeDDoSTrafficResponseBodyDDoSTrafficPoints> DDoSTrafficPoints() { DARABONBA_PTR_GET(DDoSTrafficPoints_, vector<DescribeDDoSTrafficResponseBodyDDoSTrafficPoints>) };
    inline DescribeDDoSTrafficResponseBody& setDDoSTrafficPoints(const vector<DescribeDDoSTrafficResponseBodyDDoSTrafficPoints> & DDoSTrafficPoints) { DARABONBA_PTR_SET_VALUE(DDoSTrafficPoints_, DDoSTrafficPoints) };
    inline DescribeDDoSTrafficResponseBody& setDDoSTrafficPoints(vector<DescribeDDoSTrafficResponseBodyDDoSTrafficPoints> && DDoSTrafficPoints) { DARABONBA_PTR_SET_RVALUE(DDoSTrafficPoints_, DDoSTrafficPoints) };


    // defenseInBytes Field Functions 
    bool hasDefenseInBytes() const { return this->defenseInBytes_ != nullptr;};
    void deleteDefenseInBytes() { this->defenseInBytes_ = nullptr;};
    inline int64_t defenseInBytes() const { DARABONBA_PTR_GET_DEFAULT(defenseInBytes_, 0L) };
    inline DescribeDDoSTrafficResponseBody& setDefenseInBytes(int64_t defenseInBytes) { DARABONBA_PTR_SET_VALUE(defenseInBytes_, defenseInBytes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceInBytes Field Functions 
    bool hasSourceInBytes() const { return this->sourceInBytes_ != nullptr;};
    void deleteSourceInBytes() { this->sourceInBytes_ = nullptr;};
    inline int64_t sourceInBytes() const { DARABONBA_PTR_GET_DEFAULT(sourceInBytes_, 0L) };
    inline DescribeDDoSTrafficResponseBody& setSourceInBytes(int64_t sourceInBytes) { DARABONBA_PTR_SET_VALUE(sourceInBytes_, sourceInBytes) };


  protected:
    std::shared_ptr<vector<DescribeDDoSTrafficResponseBodyDDoSTrafficPoints>> DDoSTrafficPoints_ = nullptr;
    std::shared_ptr<int64_t> defenseInBytes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> sourceInBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
