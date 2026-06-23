// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINECODEVERSIONINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINECODEVERSIONINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineCodeVersionInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineCodeVersionInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineCodeVersionInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetRoutineCodeVersionInfoRequest() = default ;
    GetRoutineCodeVersionInfoRequest(const GetRoutineCodeVersionInfoRequest &) = default ;
    GetRoutineCodeVersionInfoRequest(GetRoutineCodeVersionInfoRequest &&) = default ;
    GetRoutineCodeVersionInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineCodeVersionInfoRequest() = default ;
    GetRoutineCodeVersionInfoRequest& operator=(const GetRoutineCodeVersionInfoRequest &) = default ;
    GetRoutineCodeVersionInfoRequest& operator=(GetRoutineCodeVersionInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeVersion_ == nullptr
        && this->name_ == nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string getCodeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline GetRoutineCodeVersionInfoRequest& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRoutineCodeVersionInfoRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The code version number to query.
    // 
    // This parameter is required.
    shared_ptr<string> codeVersion_ {};
    // The name of the Edge Routine.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
