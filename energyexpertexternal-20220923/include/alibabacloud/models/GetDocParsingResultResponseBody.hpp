// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCPARSINGRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCPARSINGRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocParsingResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocParsingResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocParsingResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDocParsingResultResponseBody() = default ;
    GetDocParsingResultResponseBody(const GetDocParsingResultResponseBody &) = default ;
    GetDocParsingResultResponseBody(GetDocParsingResultResponseBody &&) = default ;
    GetDocParsingResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocParsingResultResponseBody() = default ;
    GetDocParsingResultResponseBody& operator=(const GetDocParsingResultResponseBody &) = default ;
    GetDocParsingResultResponseBody& operator=(GetDocParsingResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    protected:
      // - The parsed content of the document.
      // - The format (markdown or json) is determined by the returnFormat parameter. For specific format details, refer to: [json return structure](https://www.alibabacloud.com/help/en/energy-expert/developer-reference/interface-attached-information#b644b6255cojj)
      shared_ptr<string> content_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDocParsingResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDocParsingResultResponseBody::Data) };
    inline GetDocParsingResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDocParsingResultResponseBody::Data) };
    inline GetDocParsingResultResponseBody& setData(const GetDocParsingResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDocParsingResultResponseBody& setData(GetDocParsingResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDocParsingResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned result.
    shared_ptr<GetDocParsingResultResponseBody::Data> data_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
