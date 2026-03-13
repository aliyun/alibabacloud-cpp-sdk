// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEPARAMTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEPARAMTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeNodeParamTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeParamTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeParamTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
    };
    DescribeNodeParamTagsRequest() = default ;
    DescribeNodeParamTagsRequest(const DescribeNodeParamTagsRequest &) = default ;
    DescribeNodeParamTagsRequest(DescribeNodeParamTagsRequest &&) = default ;
    DescribeNodeParamTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeParamTagsRequest() = default ;
    DescribeNodeParamTagsRequest& operator=(const DescribeNodeParamTagsRequest &) = default ;
    DescribeNodeParamTagsRequest& operator=(DescribeNodeParamTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->nodeName_ == nullptr && this->playbookUuid_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNodeParamTagsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeNodeParamTagsRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribeNodeParamTagsRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The name of the node.
    // 
    // This parameter is required.
    shared_ptr<string> nodeName_ {};
    // The playbook UUID.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~)operation to query the playbook UUID.
    // 
    // This parameter is required.
    shared_ptr<string> playbookUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
