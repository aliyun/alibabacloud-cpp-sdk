// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYORFILEPROPERTIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYORFILEPROPERTIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDirectoryOrFilePropertiesResponseBodyEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class GetDirectoryOrFilePropertiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectoryOrFilePropertiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entry, entry_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectoryOrFilePropertiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDirectoryOrFilePropertiesResponseBody() = default ;
    GetDirectoryOrFilePropertiesResponseBody(const GetDirectoryOrFilePropertiesResponseBody &) = default ;
    GetDirectoryOrFilePropertiesResponseBody(GetDirectoryOrFilePropertiesResponseBody &&) = default ;
    GetDirectoryOrFilePropertiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectoryOrFilePropertiesResponseBody() = default ;
    GetDirectoryOrFilePropertiesResponseBody& operator=(const GetDirectoryOrFilePropertiesResponseBody &) = default ;
    GetDirectoryOrFilePropertiesResponseBody& operator=(GetDirectoryOrFilePropertiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entry_ == nullptr
        && return this->requestId_ == nullptr; };
    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline const GetDirectoryOrFilePropertiesResponseBodyEntry & entry() const { DARABONBA_PTR_GET_CONST(entry_, GetDirectoryOrFilePropertiesResponseBodyEntry) };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry entry() { DARABONBA_PTR_GET(entry_, GetDirectoryOrFilePropertiesResponseBodyEntry) };
    inline GetDirectoryOrFilePropertiesResponseBody& setEntry(const GetDirectoryOrFilePropertiesResponseBodyEntry & entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };
    inline GetDirectoryOrFilePropertiesResponseBody& setEntry(GetDirectoryOrFilePropertiesResponseBodyEntry && entry) { DARABONBA_PTR_SET_RVALUE(entry_, entry) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDirectoryOrFilePropertiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the file or directory.
    std::shared_ptr<GetDirectoryOrFilePropertiesResponseBodyEntry> entry_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
