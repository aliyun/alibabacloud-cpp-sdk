// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESTATUSSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESTATUSSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceStatusStatisticResponseBodyStatusCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceStatusStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceStatusStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCount, statusCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceStatusStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCount, statusCount_);
    };
    GetInstanceStatusStatisticResponseBody() = default ;
    GetInstanceStatusStatisticResponseBody(const GetInstanceStatusStatisticResponseBody &) = default ;
    GetInstanceStatusStatisticResponseBody(GetInstanceStatusStatisticResponseBody &&) = default ;
    GetInstanceStatusStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceStatusStatisticResponseBody() = default ;
    GetInstanceStatusStatisticResponseBody& operator=(const GetInstanceStatusStatisticResponseBody &) = default ;
    GetInstanceStatusStatisticResponseBody& operator=(GetInstanceStatusStatisticResponseBody &&) = default ;
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
    inline GetInstanceStatusStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCount Field Functions 
    bool hasStatusCount() const { return this->statusCount_ != nullptr;};
    void deleteStatusCount() { this->statusCount_ = nullptr;};
    inline const GetInstanceStatusStatisticResponseBodyStatusCount & statusCount() const { DARABONBA_PTR_GET_CONST(statusCount_, GetInstanceStatusStatisticResponseBodyStatusCount) };
    inline GetInstanceStatusStatisticResponseBodyStatusCount statusCount() { DARABONBA_PTR_GET(statusCount_, GetInstanceStatusStatisticResponseBodyStatusCount) };
    inline GetInstanceStatusStatisticResponseBody& setStatusCount(const GetInstanceStatusStatisticResponseBodyStatusCount & statusCount) { DARABONBA_PTR_SET_VALUE(statusCount_, statusCount) };
    inline GetInstanceStatusStatisticResponseBody& setStatusCount(GetInstanceStatusStatisticResponseBodyStatusCount && statusCount) { DARABONBA_PTR_SET_RVALUE(statusCount_, statusCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The numbers of instances in different states.
    std::shared_ptr<GetInstanceStatusStatisticResponseBodyStatusCount> statusCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
