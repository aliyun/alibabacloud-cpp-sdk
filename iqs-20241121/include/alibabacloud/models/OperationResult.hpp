// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_OPERATIONRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class OperationResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperationResult& obj) { 
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, OperationResult& obj) { 
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    OperationResult() = default ;
    OperationResult(const OperationResult &) = default ;
    OperationResult(OperationResult &&) = default ;
    OperationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperationResult() = default ;
    OperationResult& operator=(const OperationResult &) = default ;
    OperationResult& operator=(OperationResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->success_ == nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline OperationResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
