// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSCHEMASRESPONSEBODYPLUGINSCHEMASPLUGINSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSCHEMASRESPONSEBODYPLUGINSCHEMASPLUGINSCHEMA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginSchemasResponseBodyPluginSchemasPluginSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginSchemasResponseBodyPluginSchemasPluginSchema& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SupportClassic, supportClassic_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginSchemasResponseBodyPluginSchemasPluginSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SupportClassic, supportClassic_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribePluginSchemasResponseBodyPluginSchemasPluginSchema() = default ;
    DescribePluginSchemasResponseBodyPluginSchemasPluginSchema(const DescribePluginSchemasResponseBodyPluginSchemasPluginSchema &) = default ;
    DescribePluginSchemasResponseBodyPluginSchemasPluginSchema(DescribePluginSchemasResponseBodyPluginSchemasPluginSchema &&) = default ;
    DescribePluginSchemasResponseBodyPluginSchemasPluginSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginSchemasResponseBodyPluginSchemasPluginSchema() = default ;
    DescribePluginSchemasResponseBodyPluginSchemasPluginSchema& operator=(const DescribePluginSchemasResponseBodyPluginSchemasPluginSchema &) = default ;
    DescribePluginSchemasResponseBodyPluginSchemasPluginSchema& operator=(DescribePluginSchemasResponseBodyPluginSchemasPluginSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->documentId_ == nullptr && return this->name_ == nullptr && return this->supportClassic_ == nullptr && return this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePluginSchemasResponseBodyPluginSchemasPluginSchema& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string documentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline DescribePluginSchemasResponseBodyPluginSchemasPluginSchema& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePluginSchemasResponseBodyPluginSchemasPluginSchema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // supportClassic Field Functions 
    bool hasSupportClassic() const { return this->supportClassic_ != nullptr;};
    void deleteSupportClassic() { this->supportClassic_ = nullptr;};
    inline bool supportClassic() const { DARABONBA_PTR_GET_DEFAULT(supportClassic_, false) };
    inline DescribePluginSchemasResponseBodyPluginSchemasPluginSchema& setSupportClassic(bool supportClassic) { DARABONBA_PTR_SET_VALUE(supportClassic_, supportClassic) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribePluginSchemasResponseBodyPluginSchemasPluginSchema& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> documentId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> supportClassic_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
