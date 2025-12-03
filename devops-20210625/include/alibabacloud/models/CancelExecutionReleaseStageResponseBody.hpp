// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELEXECUTIONRELEASESTAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELEXECUTIONRELEASESTAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CancelExecutionReleaseStageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelExecutionReleaseStageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CancelExecutionReleaseStageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CancelExecutionReleaseStageResponseBody() = default ;
    CancelExecutionReleaseStageResponseBody(const CancelExecutionReleaseStageResponseBody &) = default ;
    CancelExecutionReleaseStageResponseBody(CancelExecutionReleaseStageResponseBody &&) = default ;
    CancelExecutionReleaseStageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelExecutionReleaseStageResponseBody() = default ;
    CancelExecutionReleaseStageResponseBody& operator=(const CancelExecutionReleaseStageResponseBody &) = default ;
    CancelExecutionReleaseStageResponseBody& operator=(CancelExecutionReleaseStageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->success_ == nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CancelExecutionReleaseStageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
