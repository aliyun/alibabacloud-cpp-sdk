// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODYMFATYPELIST_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODYMFATYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class GetLoginTokenResponseBodyMfaTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginTokenResponseBodyMfaTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Stage, stage_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginTokenResponseBodyMfaTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Stage, stage_);
    };
    GetLoginTokenResponseBodyMfaTypeList() = default ;
    GetLoginTokenResponseBodyMfaTypeList(const GetLoginTokenResponseBodyMfaTypeList &) = default ;
    GetLoginTokenResponseBodyMfaTypeList(GetLoginTokenResponseBodyMfaTypeList &&) = default ;
    GetLoginTokenResponseBodyMfaTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginTokenResponseBodyMfaTypeList() = default ;
    GetLoginTokenResponseBodyMfaTypeList& operator=(const GetLoginTokenResponseBodyMfaTypeList &) = default ;
    GetLoginTokenResponseBodyMfaTypeList& operator=(GetLoginTokenResponseBodyMfaTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->stage_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetLoginTokenResponseBodyMfaTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string stage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline GetLoginTokenResponseBodyMfaTypeList& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> stage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
