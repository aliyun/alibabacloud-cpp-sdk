// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDdosCountResponseBodyDdosCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DdosCount, ddosCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosCount, ddosCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDdosCountResponseBody() = default ;
    DescribeDdosCountResponseBody(const DescribeDdosCountResponseBody &) = default ;
    DescribeDdosCountResponseBody(DescribeDdosCountResponseBody &&) = default ;
    DescribeDdosCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosCountResponseBody() = default ;
    DescribeDdosCountResponseBody& operator=(const DescribeDdosCountResponseBody &) = default ;
    DescribeDdosCountResponseBody& operator=(DescribeDdosCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ddosCount_ != nullptr
        && this->requestId_ != nullptr; };
    // ddosCount Field Functions 
    bool hasDdosCount() const { return this->ddosCount_ != nullptr;};
    void deleteDdosCount() { this->ddosCount_ = nullptr;};
    inline const DescribeDdosCountResponseBodyDdosCount & ddosCount() const { DARABONBA_PTR_GET_CONST(ddosCount_, DescribeDdosCountResponseBodyDdosCount) };
    inline DescribeDdosCountResponseBodyDdosCount ddosCount() { DARABONBA_PTR_GET(ddosCount_, DescribeDdosCountResponseBodyDdosCount) };
    inline DescribeDdosCountResponseBody& setDdosCount(const DescribeDdosCountResponseBodyDdosCount & ddosCount) { DARABONBA_PTR_SET_VALUE(ddosCount_, ddosCount) };
    inline DescribeDdosCountResponseBody& setDdosCount(DescribeDdosCountResponseBodyDdosCount && ddosCount) { DARABONBA_PTR_SET_RVALUE(ddosCount_, ddosCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of assets that are under DDoS attacks.
    std::shared_ptr<DescribeDdosCountResponseBodyDdosCount> ddosCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
