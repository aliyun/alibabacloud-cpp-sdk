// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDiskAttachmentsAttachment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksResponseBodyDisksDiskAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBodyDisksDiskAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(Attachment, attachment_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBodyDisksDiskAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(Attachment, attachment_);
    };
    DescribeDisksResponseBodyDisksDiskAttachments() = default ;
    DescribeDisksResponseBodyDisksDiskAttachments(const DescribeDisksResponseBodyDisksDiskAttachments &) = default ;
    DescribeDisksResponseBodyDisksDiskAttachments(DescribeDisksResponseBodyDisksDiskAttachments &&) = default ;
    DescribeDisksResponseBodyDisksDiskAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBodyDisksDiskAttachments() = default ;
    DescribeDisksResponseBodyDisksDiskAttachments& operator=(const DescribeDisksResponseBodyDisksDiskAttachments &) = default ;
    DescribeDisksResponseBodyDisksDiskAttachments& operator=(DescribeDisksResponseBodyDisksDiskAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachment_ == nullptr; };
    // attachment Field Functions 
    bool hasAttachment() const { return this->attachment_ != nullptr;};
    void deleteAttachment() { this->attachment_ = nullptr;};
    inline const vector<Models::DescribeDisksResponseBodyDisksDiskAttachmentsAttachment> & attachment() const { DARABONBA_PTR_GET_CONST(attachment_, vector<Models::DescribeDisksResponseBodyDisksDiskAttachmentsAttachment>) };
    inline vector<Models::DescribeDisksResponseBodyDisksDiskAttachmentsAttachment> attachment() { DARABONBA_PTR_GET(attachment_, vector<Models::DescribeDisksResponseBodyDisksDiskAttachmentsAttachment>) };
    inline DescribeDisksResponseBodyDisksDiskAttachments& setAttachment(const vector<Models::DescribeDisksResponseBodyDisksDiskAttachmentsAttachment> & attachment) { DARABONBA_PTR_SET_VALUE(attachment_, attachment) };
    inline DescribeDisksResponseBodyDisksDiskAttachments& setAttachment(vector<Models::DescribeDisksResponseBodyDisksDiskAttachmentsAttachment> && attachment) { DARABONBA_PTR_SET_RVALUE(attachment_, attachment) };


  protected:
    std::shared_ptr<vector<Models::DescribeDisksResponseBodyDisksDiskAttachmentsAttachment>> attachment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
