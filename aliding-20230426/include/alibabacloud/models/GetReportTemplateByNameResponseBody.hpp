// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetReportTemplateByNameResponseBodyDefaultReceivedConvs.hpp>
#include <alibabacloud/models/GetReportTemplateByNameResponseBodyDefaultReceivers.hpp>
#include <alibabacloud/models/GetReportTemplateByNameResponseBodyFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetReportTemplateByNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportTemplateByNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(defaultReceivedConvs, defaultReceivedConvs_);
      DARABONBA_PTR_TO_JSON(defaultReceivers, defaultReceivers_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
      DARABONBA_PTR_TO_JSON(userid, userid_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportTemplateByNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultReceivedConvs, defaultReceivedConvs_);
      DARABONBA_PTR_FROM_JSON(defaultReceivers, defaultReceivers_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
      DARABONBA_PTR_FROM_JSON(userid, userid_);
    };
    GetReportTemplateByNameResponseBody() = default ;
    GetReportTemplateByNameResponseBody(const GetReportTemplateByNameResponseBody &) = default ;
    GetReportTemplateByNameResponseBody(GetReportTemplateByNameResponseBody &&) = default ;
    GetReportTemplateByNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportTemplateByNameResponseBody() = default ;
    GetReportTemplateByNameResponseBody& operator=(const GetReportTemplateByNameResponseBody &) = default ;
    GetReportTemplateByNameResponseBody& operator=(GetReportTemplateByNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultReceivedConvs_ == nullptr
        && return this->defaultReceivers_ == nullptr && return this->fields_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->requestId_ == nullptr
        && return this->userName_ == nullptr && return this->userid_ == nullptr; };
    // defaultReceivedConvs Field Functions 
    bool hasDefaultReceivedConvs() const { return this->defaultReceivedConvs_ != nullptr;};
    void deleteDefaultReceivedConvs() { this->defaultReceivedConvs_ = nullptr;};
    inline const vector<GetReportTemplateByNameResponseBodyDefaultReceivedConvs> & defaultReceivedConvs() const { DARABONBA_PTR_GET_CONST(defaultReceivedConvs_, vector<GetReportTemplateByNameResponseBodyDefaultReceivedConvs>) };
    inline vector<GetReportTemplateByNameResponseBodyDefaultReceivedConvs> defaultReceivedConvs() { DARABONBA_PTR_GET(defaultReceivedConvs_, vector<GetReportTemplateByNameResponseBodyDefaultReceivedConvs>) };
    inline GetReportTemplateByNameResponseBody& setDefaultReceivedConvs(const vector<GetReportTemplateByNameResponseBodyDefaultReceivedConvs> & defaultReceivedConvs) { DARABONBA_PTR_SET_VALUE(defaultReceivedConvs_, defaultReceivedConvs) };
    inline GetReportTemplateByNameResponseBody& setDefaultReceivedConvs(vector<GetReportTemplateByNameResponseBodyDefaultReceivedConvs> && defaultReceivedConvs) { DARABONBA_PTR_SET_RVALUE(defaultReceivedConvs_, defaultReceivedConvs) };


    // defaultReceivers Field Functions 
    bool hasDefaultReceivers() const { return this->defaultReceivers_ != nullptr;};
    void deleteDefaultReceivers() { this->defaultReceivers_ = nullptr;};
    inline const vector<GetReportTemplateByNameResponseBodyDefaultReceivers> & defaultReceivers() const { DARABONBA_PTR_GET_CONST(defaultReceivers_, vector<GetReportTemplateByNameResponseBodyDefaultReceivers>) };
    inline vector<GetReportTemplateByNameResponseBodyDefaultReceivers> defaultReceivers() { DARABONBA_PTR_GET(defaultReceivers_, vector<GetReportTemplateByNameResponseBodyDefaultReceivers>) };
    inline GetReportTemplateByNameResponseBody& setDefaultReceivers(const vector<GetReportTemplateByNameResponseBodyDefaultReceivers> & defaultReceivers) { DARABONBA_PTR_SET_VALUE(defaultReceivers_, defaultReceivers) };
    inline GetReportTemplateByNameResponseBody& setDefaultReceivers(vector<GetReportTemplateByNameResponseBodyDefaultReceivers> && defaultReceivers) { DARABONBA_PTR_SET_RVALUE(defaultReceivers_, defaultReceivers) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<GetReportTemplateByNameResponseBodyFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<GetReportTemplateByNameResponseBodyFields>) };
    inline vector<GetReportTemplateByNameResponseBodyFields> fields() { DARABONBA_PTR_GET(fields_, vector<GetReportTemplateByNameResponseBodyFields>) };
    inline GetReportTemplateByNameResponseBody& setFields(const vector<GetReportTemplateByNameResponseBodyFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetReportTemplateByNameResponseBody& setFields(vector<GetReportTemplateByNameResponseBodyFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetReportTemplateByNameResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetReportTemplateByNameResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetReportTemplateByNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetReportTemplateByNameResponseBody& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userid Field Functions 
    bool hasUserid() const { return this->userid_ != nullptr;};
    void deleteUserid() { this->userid_ = nullptr;};
    inline string userid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
    inline GetReportTemplateByNameResponseBody& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


  protected:
    std::shared_ptr<vector<GetReportTemplateByNameResponseBodyDefaultReceivedConvs>> defaultReceivedConvs_ = nullptr;
    std::shared_ptr<vector<GetReportTemplateByNameResponseBodyDefaultReceivers>> defaultReceivers_ = nullptr;
    std::shared_ptr<vector<GetReportTemplateByNameResponseBodyFields>> fields_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<string> userid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
