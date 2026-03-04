// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METADATA_HPP_
#define ALIBABACLOUD_MODELS_METADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class Metadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
      DARABONBA_PTR_TO_JSON(Attachments, attachments_);
    };
    friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
    };
    Metadata() = default ;
    Metadata(const Metadata &) = default ;
    Metadata(Metadata &&) = default ;
    Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Metadata() = default ;
    Metadata& operator=(const Metadata &) = default ;
    Metadata& operator=(Metadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Attachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(MimeType, mimeType_);
      };
      friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(MimeType, mimeType_);
      };
      Attachments() = default ;
      Attachments(const Attachments &) = default ;
      Attachments(Attachments &&) = default ;
      Attachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attachments() = default ;
      Attachments& operator=(const Attachments &) = default ;
      Attachments& operator=(Attachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arn_ == nullptr
        && this->mimeType_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline Attachments& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // mimeType Field Functions 
      bool hasMimeType() const { return this->mimeType_ != nullptr;};
      void deleteMimeType() { this->mimeType_ = nullptr;};
      inline string getMimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
      inline Attachments& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


    protected:
      shared_ptr<string> arn_ {};
      shared_ptr<string> mimeType_ {};
    };

    virtual bool empty() const override { return this->attachments_ == nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<Metadata::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Metadata::Attachments>) };
    inline vector<Metadata::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<Metadata::Attachments>) };
    inline Metadata& setAttachments(const vector<Metadata::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline Metadata& setAttachments(vector<Metadata::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


  protected:
    shared_ptr<vector<Metadata::Attachments>> attachments_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
