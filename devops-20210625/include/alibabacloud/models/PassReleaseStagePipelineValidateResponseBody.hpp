// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PASSRELEASESTAGEPIPELINEVALIDATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PASSRELEASESTAGEPIPELINEVALIDATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class PassReleaseStagePipelineValidateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PassReleaseStagePipelineValidateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PassReleaseStagePipelineValidateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    PassReleaseStagePipelineValidateResponseBody() = default ;
    PassReleaseStagePipelineValidateResponseBody(const PassReleaseStagePipelineValidateResponseBody &) = default ;
    PassReleaseStagePipelineValidateResponseBody(PassReleaseStagePipelineValidateResponseBody &&) = default ;
    PassReleaseStagePipelineValidateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PassReleaseStagePipelineValidateResponseBody() = default ;
    PassReleaseStagePipelineValidateResponseBody& operator=(const PassReleaseStagePipelineValidateResponseBody &) = default ;
    PassReleaseStagePipelineValidateResponseBody& operator=(PassReleaseStagePipelineValidateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->success_ == nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PassReleaseStagePipelineValidateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
