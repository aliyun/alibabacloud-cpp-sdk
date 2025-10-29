// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLERESULT_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CheckServiceLinkedRoleResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceLinkedRoleResult& obj) { 
      DARABONBA_PTR_TO_JSON(existed, existed_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceLinkedRoleResult& obj) { 
      DARABONBA_PTR_FROM_JSON(existed, existed_);
    };
    CheckServiceLinkedRoleResult() = default ;
    CheckServiceLinkedRoleResult(const CheckServiceLinkedRoleResult &) = default ;
    CheckServiceLinkedRoleResult(CheckServiceLinkedRoleResult &&) = default ;
    CheckServiceLinkedRoleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceLinkedRoleResult() = default ;
    CheckServiceLinkedRoleResult& operator=(const CheckServiceLinkedRoleResult &) = default ;
    CheckServiceLinkedRoleResult& operator=(CheckServiceLinkedRoleResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->existed_ == nullptr; };
    // existed Field Functions 
    bool hasExisted() const { return this->existed_ != nullptr;};
    void deleteExisted() { this->existed_ = nullptr;};
    inline bool existed() const { DARABONBA_PTR_GET_DEFAULT(existed_, false) };
    inline CheckServiceLinkedRoleResult& setExisted(bool existed) { DARABONBA_PTR_SET_VALUE(existed_, existed) };


  protected:
    std::shared_ptr<bool> existed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
