// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESTATUSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESTATUSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceStatusCountResponseBodyStatusCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceStatusCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceStatusCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCount, statusCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceStatusCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCount, statusCount_);
    };
    GetInstanceStatusCountResponseBody() = default ;
    GetInstanceStatusCountResponseBody(const GetInstanceStatusCountResponseBody &) = default ;
    GetInstanceStatusCountResponseBody(GetInstanceStatusCountResponseBody &&) = default ;
    GetInstanceStatusCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceStatusCountResponseBody() = default ;
    GetInstanceStatusCountResponseBody& operator=(const GetInstanceStatusCountResponseBody &) = default ;
    GetInstanceStatusCountResponseBody& operator=(GetInstanceStatusCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->statusCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceStatusCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCount Field Functions 
    bool hasStatusCount() const { return this->statusCount_ != nullptr;};
    void deleteStatusCount() { this->statusCount_ = nullptr;};
    inline const GetInstanceStatusCountResponseBodyStatusCount & statusCount() const { DARABONBA_PTR_GET_CONST(statusCount_, GetInstanceStatusCountResponseBodyStatusCount) };
    inline GetInstanceStatusCountResponseBodyStatusCount statusCount() { DARABONBA_PTR_GET(statusCount_, GetInstanceStatusCountResponseBodyStatusCount) };
    inline GetInstanceStatusCountResponseBody& setStatusCount(const GetInstanceStatusCountResponseBodyStatusCount & statusCount) { DARABONBA_PTR_SET_VALUE(statusCount_, statusCount) };
    inline GetInstanceStatusCountResponseBody& setStatusCount(GetInstanceStatusCountResponseBodyStatusCount && statusCount) { DARABONBA_PTR_SET_RVALUE(statusCount_, statusCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics of instances.
    std::shared_ptr<GetInstanceStatusCountResponseBodyStatusCount> statusCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
