// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEIDPLAYSTATISBYEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEIDPLAYSTATISBYEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeFileIdPlayStatisByEdgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileIdPlayStatisByEdgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileIdPlayStatisByEdgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    DescribeFileIdPlayStatisByEdgeRequest() = default ;
    DescribeFileIdPlayStatisByEdgeRequest(const DescribeFileIdPlayStatisByEdgeRequest &) = default ;
    DescribeFileIdPlayStatisByEdgeRequest(DescribeFileIdPlayStatisByEdgeRequest &&) = default ;
    DescribeFileIdPlayStatisByEdgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileIdPlayStatisByEdgeRequest() = default ;
    DescribeFileIdPlayStatisByEdgeRequest& operator=(const DescribeFileIdPlayStatisByEdgeRequest &) = default ;
    DescribeFileIdPlayStatisByEdgeRequest& operator=(DescribeFileIdPlayStatisByEdgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->ownerId_ != nullptr && this->pageSize_ != nullptr && this->scrollToken_ != nullptr && this->to_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeFileIdPlayStatisByEdgeRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeFileIdPlayStatisByEdgeRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFileIdPlayStatisByEdgeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scrollToken Field Functions 
    bool hasScrollToken() const { return this->scrollToken_ != nullptr;};
    void deleteScrollToken() { this->scrollToken_ = nullptr;};
    inline string scrollToken() const { DARABONBA_PTR_GET_DEFAULT(scrollToken_, "") };
    inline DescribeFileIdPlayStatisByEdgeRequest& setScrollToken(string scrollToken) { DARABONBA_PTR_SET_VALUE(scrollToken_, scrollToken) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string to() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline DescribeFileIdPlayStatisByEdgeRequest& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> from_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> scrollToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
