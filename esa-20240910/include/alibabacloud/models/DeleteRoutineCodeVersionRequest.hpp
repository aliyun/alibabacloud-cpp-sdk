// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTINECODEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTINECODEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteRoutineCodeVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoutineCodeVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoutineCodeVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteRoutineCodeVersionRequest() = default ;
    DeleteRoutineCodeVersionRequest(const DeleteRoutineCodeVersionRequest &) = default ;
    DeleteRoutineCodeVersionRequest(DeleteRoutineCodeVersionRequest &&) = default ;
    DeleteRoutineCodeVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRoutineCodeVersionRequest() = default ;
    DeleteRoutineCodeVersionRequest& operator=(const DeleteRoutineCodeVersionRequest &) = default ;
    DeleteRoutineCodeVersionRequest& operator=(DeleteRoutineCodeVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeVersion_ != nullptr
        && this->name_ != nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string codeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline DeleteRoutineCodeVersionRequest& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteRoutineCodeVersionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The code version.
    // 
    // This parameter is required.
    std::shared_ptr<string> codeVersion_ = nullptr;
    // The routine name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
