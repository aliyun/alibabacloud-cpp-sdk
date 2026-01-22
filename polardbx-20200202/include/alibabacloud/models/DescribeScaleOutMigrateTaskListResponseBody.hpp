// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALEOUTMIGRATETASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALEOUTMIGRATETASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeScaleOutMigrateTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScaleOutMigrateTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScaleOutMigrateTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeScaleOutMigrateTaskListResponseBody() = default ;
    DescribeScaleOutMigrateTaskListResponseBody(const DescribeScaleOutMigrateTaskListResponseBody &) = default ;
    DescribeScaleOutMigrateTaskListResponseBody(DescribeScaleOutMigrateTaskListResponseBody &&) = default ;
    DescribeScaleOutMigrateTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScaleOutMigrateTaskListResponseBody() = default ;
    DescribeScaleOutMigrateTaskListResponseBody& operator=(const DescribeScaleOutMigrateTaskListResponseBody &) = default ;
    DescribeScaleOutMigrateTaskListResponseBody& operator=(DescribeScaleOutMigrateTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->progress_ == nullptr
        && this->requestId_ == nullptr; };
    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeScaleOutMigrateTaskListResponseBody& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScaleOutMigrateTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> progress_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
