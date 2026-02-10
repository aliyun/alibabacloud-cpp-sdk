// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCREATEVULWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCREATEVULWHITELISTRESPONSEBODY_HPP_
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
  class ModifyCreateVulWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCreateVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulWhitelistList, vulWhitelistList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCreateVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulWhitelistList, vulWhitelistList_);
    };
    ModifyCreateVulWhitelistResponseBody() = default ;
    ModifyCreateVulWhitelistResponseBody(const ModifyCreateVulWhitelistResponseBody &) = default ;
    ModifyCreateVulWhitelistResponseBody(ModifyCreateVulWhitelistResponseBody &&) = default ;
    ModifyCreateVulWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCreateVulWhitelistResponseBody() = default ;
    ModifyCreateVulWhitelistResponseBody& operator=(const ModifyCreateVulWhitelistResponseBody &) = default ;
    ModifyCreateVulWhitelistResponseBody& operator=(ModifyCreateVulWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulWhitelistList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulWhitelistList& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, VulWhitelistList& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      VulWhitelistList() = default ;
      VulWhitelistList(const VulWhitelistList &) = default ;
      VulWhitelistList(VulWhitelistList &&) = default ;
      VulWhitelistList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulWhitelistList() = default ;
      VulWhitelistList& operator=(const VulWhitelistList &) = default ;
      VulWhitelistList& operator=(VulWhitelistList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline VulWhitelistList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // The ID of the whitelist.
      shared_ptr<int64_t> id_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vulWhitelistList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCreateVulWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulWhitelistList Field Functions 
    bool hasVulWhitelistList() const { return this->vulWhitelistList_ != nullptr;};
    void deleteVulWhitelistList() { this->vulWhitelistList_ = nullptr;};
    inline const vector<ModifyCreateVulWhitelistResponseBody::VulWhitelistList> & getVulWhitelistList() const { DARABONBA_PTR_GET_CONST(vulWhitelistList_, vector<ModifyCreateVulWhitelistResponseBody::VulWhitelistList>) };
    inline vector<ModifyCreateVulWhitelistResponseBody::VulWhitelistList> getVulWhitelistList() { DARABONBA_PTR_GET(vulWhitelistList_, vector<ModifyCreateVulWhitelistResponseBody::VulWhitelistList>) };
    inline ModifyCreateVulWhitelistResponseBody& setVulWhitelistList(const vector<ModifyCreateVulWhitelistResponseBody::VulWhitelistList> & vulWhitelistList) { DARABONBA_PTR_SET_VALUE(vulWhitelistList_, vulWhitelistList) };
    inline ModifyCreateVulWhitelistResponseBody& setVulWhitelistList(vector<ModifyCreateVulWhitelistResponseBody::VulWhitelistList> && vulWhitelistList) { DARABONBA_PTR_SET_RVALUE(vulWhitelistList_, vulWhitelistList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the information about the whitelist.
    shared_ptr<vector<ModifyCreateVulWhitelistResponseBody::VulWhitelistList>> vulWhitelistList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
