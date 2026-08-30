// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSASEUSERTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSASEUSERTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetSaseUserTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSaseUserTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaseUserTag, saseUserTag_);
    };
    friend void from_json(const Darabonba::Json& j, GetSaseUserTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaseUserTag, saseUserTag_);
    };
    GetSaseUserTagResponseBody() = default ;
    GetSaseUserTagResponseBody(const GetSaseUserTagResponseBody &) = default ;
    GetSaseUserTagResponseBody(GetSaseUserTagResponseBody &&) = default ;
    GetSaseUserTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSaseUserTagResponseBody() = default ;
    GetSaseUserTagResponseBody& operator=(const GetSaseUserTagResponseBody &) = default ;
    GetSaseUserTagResponseBody& operator=(GetSaseUserTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SaseUserTag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SaseUserTag& obj) { 
        DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
      };
      friend void from_json(const Darabonba::Json& j, SaseUserTag& obj) { 
        DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      };
      SaseUserTag() = default ;
      SaseUserTag(const SaseUserTag &) = default ;
      SaseUserTag(SaseUserTag &&) = default ;
      SaseUserTag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SaseUserTag() = default ;
      SaseUserTag& operator=(const SaseUserTag &) = default ;
      SaseUserTag& operator=(SaseUserTag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliuid_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->tagId_ == nullptr; };
      // aliuid Field Functions 
      bool hasAliuid() const { return this->aliuid_ != nullptr;};
      void deleteAliuid() { this->aliuid_ = nullptr;};
      inline string getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
      inline SaseUserTag& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SaseUserTag& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SaseUserTag& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
      inline SaseUserTag& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    protected:
      // The Alibaba Cloud account ID.
      shared_ptr<string> aliuid_ {};
      // The user tag description.
      shared_ptr<string> description_ {};
      // The user tag name.
      shared_ptr<string> name_ {};
      // The user tag ID.
      shared_ptr<string> tagId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->saseUserTag_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSaseUserTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saseUserTag Field Functions 
    bool hasSaseUserTag() const { return this->saseUserTag_ != nullptr;};
    void deleteSaseUserTag() { this->saseUserTag_ = nullptr;};
    inline const GetSaseUserTagResponseBody::SaseUserTag & getSaseUserTag() const { DARABONBA_PTR_GET_CONST(saseUserTag_, GetSaseUserTagResponseBody::SaseUserTag) };
    inline GetSaseUserTagResponseBody::SaseUserTag getSaseUserTag() { DARABONBA_PTR_GET(saseUserTag_, GetSaseUserTagResponseBody::SaseUserTag) };
    inline GetSaseUserTagResponseBody& setSaseUserTag(const GetSaseUserTagResponseBody::SaseUserTag & saseUserTag) { DARABONBA_PTR_SET_VALUE(saseUserTag_, saseUserTag) };
    inline GetSaseUserTagResponseBody& setSaseUserTag(GetSaseUserTagResponseBody::SaseUserTag && saseUserTag) { DARABONBA_PTR_SET_RVALUE(saseUserTag_, saseUserTag) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The user tag response body.
    shared_ptr<GetSaseUserTagResponseBody::SaseUserTag> saseUserTag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
