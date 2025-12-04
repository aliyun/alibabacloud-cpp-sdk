// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEERATTACHMENTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEERATTACHMENTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateErAttachmentResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateErAttachmentResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(ErAttachmentId, erAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateErAttachmentResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ErAttachmentId, erAttachmentId_);
    };
    CreateErAttachmentResponseBodyContent() = default ;
    CreateErAttachmentResponseBodyContent(const CreateErAttachmentResponseBodyContent &) = default ;
    CreateErAttachmentResponseBodyContent(CreateErAttachmentResponseBodyContent &&) = default ;
    CreateErAttachmentResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateErAttachmentResponseBodyContent() = default ;
    CreateErAttachmentResponseBodyContent& operator=(const CreateErAttachmentResponseBodyContent &) = default ;
    CreateErAttachmentResponseBodyContent& operator=(CreateErAttachmentResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->erAttachmentId_ == nullptr; };
    // erAttachmentId Field Functions 
    bool hasErAttachmentId() const { return this->erAttachmentId_ != nullptr;};
    void deleteErAttachmentId() { this->erAttachmentId_ = nullptr;};
    inline string erAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentId_, "") };
    inline CreateErAttachmentResponseBodyContent& setErAttachmentId(string erAttachmentId) { DARABONBA_PTR_SET_VALUE(erAttachmentId_, erAttachmentId) };


  protected:
    // The ID of the network connection instance.
    std::shared_ptr<string> erAttachmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
