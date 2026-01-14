// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTISPTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTISPTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListIspTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIspTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IspTypeList, ispTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIspTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IspTypeList, ispTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIspTypesResponseBody() = default ;
    ListIspTypesResponseBody(const ListIspTypesResponseBody &) = default ;
    ListIspTypesResponseBody(ListIspTypesResponseBody &&) = default ;
    ListIspTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIspTypesResponseBody() = default ;
    ListIspTypesResponseBody& operator=(const ListIspTypesResponseBody &) = default ;
    ListIspTypesResponseBody& operator=(ListIspTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ispTypeList_ == nullptr
        && this->requestId_ == nullptr; };
    // ispTypeList Field Functions 
    bool hasIspTypeList() const { return this->ispTypeList_ != nullptr;};
    void deleteIspTypeList() { this->ispTypeList_ = nullptr;};
    inline const vector<string> & getIspTypeList() const { DARABONBA_PTR_GET_CONST(ispTypeList_, vector<string>) };
    inline vector<string> getIspTypeList() { DARABONBA_PTR_GET(ispTypeList_, vector<string>) };
    inline ListIspTypesResponseBody& setIspTypeList(const vector<string> & ispTypeList) { DARABONBA_PTR_SET_VALUE(ispTypeList_, ispTypeList) };
    inline ListIspTypesResponseBody& setIspTypeList(vector<string> && ispTypeList) { DARABONBA_PTR_SET_RVALUE(ispTypeList_, ispTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIspTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The line types of EIPs in the acceleration region.
    // 
    // *   **BGP** (default): BGP (Multi-ISP) lines
    // *   **BGP_PRO**: BGP (Multi-ISP) Pro lines
    // 
    // If you have the permissions to use single-ISP bandwidth, one of the following values may be returned:
    // 
    // *   **ChinaTelecom**: China Telecom (single ISP)
    // *   **ChinaUnicom**: China Unicom (single ISP)
    // *   **ChinaMobile**: China Mobile (single ISP)
    // *   **ChinaTelecom_L2**: China Telecom_L2 (single ISP)
    // *   **ChinaUnicom_L2**: China Unicom_L2 (single ISP)
    // *   **ChinaMobile_L2**: China Mobile_L2 (single ISP)
    // 
    // > Different acceleration regions support different single-ISP BGP lines.
    shared_ptr<vector<string>> ispTypeList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
