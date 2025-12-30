// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERADORGANIZATIONUNITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERADORGANIZATIONUNITSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListUserAdOrganizationUnitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAdOrganizationUnitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OUNames, OUNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAdOrganizationUnitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OUNames, OUNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserAdOrganizationUnitsResponseBody() = default ;
    ListUserAdOrganizationUnitsResponseBody(const ListUserAdOrganizationUnitsResponseBody &) = default ;
    ListUserAdOrganizationUnitsResponseBody(ListUserAdOrganizationUnitsResponseBody &&) = default ;
    ListUserAdOrganizationUnitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAdOrganizationUnitsResponseBody() = default ;
    ListUserAdOrganizationUnitsResponseBody& operator=(const ListUserAdOrganizationUnitsResponseBody &) = default ;
    ListUserAdOrganizationUnitsResponseBody& operator=(ListUserAdOrganizationUnitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OUNames : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OUNames& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayOUName, displayOUName_);
        DARABONBA_PTR_TO_JSON(OUName, OUName_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      };
      friend void from_json(const Darabonba::Json& j, OUNames& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayOUName, displayOUName_);
        DARABONBA_PTR_FROM_JSON(OUName, OUName_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      };
      OUNames() = default ;
      OUNames(const OUNames &) = default ;
      OUNames(OUNames &&) = default ;
      OUNames(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OUNames() = default ;
      OUNames& operator=(const OUNames &) = default ;
      OUNames& operator=(OUNames &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayOUName_ == nullptr
        && this->OUName_ == nullptr && this->officeSiteId_ == nullptr; };
      // displayOUName Field Functions 
      bool hasDisplayOUName() const { return this->displayOUName_ != nullptr;};
      void deleteDisplayOUName() { this->displayOUName_ = nullptr;};
      inline string getDisplayOUName() const { DARABONBA_PTR_GET_DEFAULT(displayOUName_, "") };
      inline OUNames& setDisplayOUName(string displayOUName) { DARABONBA_PTR_SET_VALUE(displayOUName_, displayOUName) };


      // OUName Field Functions 
      bool hasOUName() const { return this->OUName_ != nullptr;};
      void deleteOUName() { this->OUName_ = nullptr;};
      inline string getOUName() const { DARABONBA_PTR_GET_DEFAULT(OUName_, "") };
      inline OUNames& setOUName(string OUName) { DARABONBA_PTR_SET_VALUE(OUName_, OUName) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline OUNames& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    protected:
      // The name of the OU.
      shared_ptr<string> displayOUName_ {};
      // The canonical name (CNAME) of the OU in the AD domain controller.
      shared_ptr<string> OUName_ {};
      // The enterprise AD office network ID.
      shared_ptr<string> officeSiteId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->OUNames_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserAdOrganizationUnitsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // OUNames Field Functions 
    bool hasOUNames() const { return this->OUNames_ != nullptr;};
    void deleteOUNames() { this->OUNames_ = nullptr;};
    inline const vector<ListUserAdOrganizationUnitsResponseBody::OUNames> & getOUNames() const { DARABONBA_PTR_GET_CONST(OUNames_, vector<ListUserAdOrganizationUnitsResponseBody::OUNames>) };
    inline vector<ListUserAdOrganizationUnitsResponseBody::OUNames> getOUNames() { DARABONBA_PTR_GET(OUNames_, vector<ListUserAdOrganizationUnitsResponseBody::OUNames>) };
    inline ListUserAdOrganizationUnitsResponseBody& setOUNames(const vector<ListUserAdOrganizationUnitsResponseBody::OUNames> & oUNames) { DARABONBA_PTR_SET_VALUE(OUNames_, oUNames) };
    inline ListUserAdOrganizationUnitsResponseBody& setOUNames(vector<ListUserAdOrganizationUnitsResponseBody::OUNames> && oUNames) { DARABONBA_PTR_SET_RVALUE(OUNames_, oUNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserAdOrganizationUnitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The OUs of the AD domain.
    shared_ptr<vector<ListUserAdOrganizationUnitsResponseBody::OUNames>> OUNames_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
