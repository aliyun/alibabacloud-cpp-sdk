// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckCustomConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckCustomConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IllegalCustomConfigs, illegalCustomConfigs_);
      DARABONBA_PTR_TO_JSON(IllegalRepairConfigs, illegalRepairConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckCustomConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IllegalCustomConfigs, illegalCustomConfigs_);
      DARABONBA_PTR_FROM_JSON(IllegalRepairConfigs, illegalRepairConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ChangeCheckCustomConfigResponseBody() = default ;
    ChangeCheckCustomConfigResponseBody(const ChangeCheckCustomConfigResponseBody &) = default ;
    ChangeCheckCustomConfigResponseBody(ChangeCheckCustomConfigResponseBody &&) = default ;
    ChangeCheckCustomConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckCustomConfigResponseBody() = default ;
    ChangeCheckCustomConfigResponseBody& operator=(const ChangeCheckCustomConfigResponseBody &) = default ;
    ChangeCheckCustomConfigResponseBody& operator=(ChangeCheckCustomConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IllegalRepairConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IllegalRepairConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, IllegalRepairConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      IllegalRepairConfigs() = default ;
      IllegalRepairConfigs(const IllegalRepairConfigs &) = default ;
      IllegalRepairConfigs(IllegalRepairConfigs &&) = default ;
      IllegalRepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IllegalRepairConfigs() = default ;
      IllegalRepairConfigs& operator=(const IllegalRepairConfigs &) = default ;
      IllegalRepairConfigs& operator=(IllegalRepairConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline IllegalRepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The name of the invalid parameter required for fixing a risk item.
      shared_ptr<string> name_ {};
    };

    class IllegalCustomConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IllegalCustomConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, IllegalCustomConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      IllegalCustomConfigs() = default ;
      IllegalCustomConfigs(const IllegalCustomConfigs &) = default ;
      IllegalCustomConfigs(IllegalCustomConfigs &&) = default ;
      IllegalCustomConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IllegalCustomConfigs() = default ;
      IllegalCustomConfigs& operator=(const IllegalCustomConfigs &) = default ;
      IllegalCustomConfigs& operator=(IllegalCustomConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline IllegalCustomConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The name of the custom configuration item, which is unique in a check item.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->illegalCustomConfigs_ == nullptr
        && this->illegalRepairConfigs_ == nullptr && this->requestId_ == nullptr; };
    // illegalCustomConfigs Field Functions 
    bool hasIllegalCustomConfigs() const { return this->illegalCustomConfigs_ != nullptr;};
    void deleteIllegalCustomConfigs() { this->illegalCustomConfigs_ = nullptr;};
    inline const vector<ChangeCheckCustomConfigResponseBody::IllegalCustomConfigs> & getIllegalCustomConfigs() const { DARABONBA_PTR_GET_CONST(illegalCustomConfigs_, vector<ChangeCheckCustomConfigResponseBody::IllegalCustomConfigs>) };
    inline vector<ChangeCheckCustomConfigResponseBody::IllegalCustomConfigs> getIllegalCustomConfigs() { DARABONBA_PTR_GET(illegalCustomConfigs_, vector<ChangeCheckCustomConfigResponseBody::IllegalCustomConfigs>) };
    inline ChangeCheckCustomConfigResponseBody& setIllegalCustomConfigs(const vector<ChangeCheckCustomConfigResponseBody::IllegalCustomConfigs> & illegalCustomConfigs) { DARABONBA_PTR_SET_VALUE(illegalCustomConfigs_, illegalCustomConfigs) };
    inline ChangeCheckCustomConfigResponseBody& setIllegalCustomConfigs(vector<ChangeCheckCustomConfigResponseBody::IllegalCustomConfigs> && illegalCustomConfigs) { DARABONBA_PTR_SET_RVALUE(illegalCustomConfigs_, illegalCustomConfigs) };


    // illegalRepairConfigs Field Functions 
    bool hasIllegalRepairConfigs() const { return this->illegalRepairConfigs_ != nullptr;};
    void deleteIllegalRepairConfigs() { this->illegalRepairConfigs_ = nullptr;};
    inline const vector<ChangeCheckCustomConfigResponseBody::IllegalRepairConfigs> & getIllegalRepairConfigs() const { DARABONBA_PTR_GET_CONST(illegalRepairConfigs_, vector<ChangeCheckCustomConfigResponseBody::IllegalRepairConfigs>) };
    inline vector<ChangeCheckCustomConfigResponseBody::IllegalRepairConfigs> getIllegalRepairConfigs() { DARABONBA_PTR_GET(illegalRepairConfigs_, vector<ChangeCheckCustomConfigResponseBody::IllegalRepairConfigs>) };
    inline ChangeCheckCustomConfigResponseBody& setIllegalRepairConfigs(const vector<ChangeCheckCustomConfigResponseBody::IllegalRepairConfigs> & illegalRepairConfigs) { DARABONBA_PTR_SET_VALUE(illegalRepairConfigs_, illegalRepairConfigs) };
    inline ChangeCheckCustomConfigResponseBody& setIllegalRepairConfigs(vector<ChangeCheckCustomConfigResponseBody::IllegalRepairConfigs> && illegalRepairConfigs) { DARABONBA_PTR_SET_RVALUE(illegalRepairConfigs_, illegalRepairConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeCheckCustomConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the invalid custom configuration items of the check item.
    shared_ptr<vector<ChangeCheckCustomConfigResponseBody::IllegalCustomConfigs>> illegalCustomConfigs_ {};
    // An array that consists of the invalid parameters required for fixing risk items.
    shared_ptr<vector<ChangeCheckCustomConfigResponseBody::IllegalRepairConfigs>> illegalRepairConfigs_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
