// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEMPLOYEEREQUESTBASELOCATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEMPLOYEEREQUESTBASELOCATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class UpdateEmployeeRequestBaseLocationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEmployeeRequestBaseLocationList& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(level, level_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEmployeeRequestBaseLocationList& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(level, level_);
    };
    UpdateEmployeeRequestBaseLocationList() = default ;
    UpdateEmployeeRequestBaseLocationList(const UpdateEmployeeRequestBaseLocationList &) = default ;
    UpdateEmployeeRequestBaseLocationList(UpdateEmployeeRequestBaseLocationList &&) = default ;
    UpdateEmployeeRequestBaseLocationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEmployeeRequestBaseLocationList() = default ;
    UpdateEmployeeRequestBaseLocationList& operator=(const UpdateEmployeeRequestBaseLocationList &) = default ;
    UpdateEmployeeRequestBaseLocationList& operator=(UpdateEmployeeRequestBaseLocationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->level_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateEmployeeRequestBaseLocationList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline UpdateEmployeeRequestBaseLocationList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
