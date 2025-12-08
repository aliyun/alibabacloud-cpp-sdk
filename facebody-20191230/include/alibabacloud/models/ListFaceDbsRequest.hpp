// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFACEDBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFACEDBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class ListFaceDbsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFaceDbsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
    };
    friend void from_json(const Darabonba::Json& j, ListFaceDbsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
    };
    ListFaceDbsRequest() = default ;
    ListFaceDbsRequest(const ListFaceDbsRequest &) = default ;
    ListFaceDbsRequest(ListFaceDbsRequest &&) = default ;
    ListFaceDbsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFaceDbsRequest() = default ;
    ListFaceDbsRequest& operator=(const ListFaceDbsRequest &) = default ;
    ListFaceDbsRequest& operator=(ListFaceDbsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && return this->offset_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ListFaceDbsRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline ListFaceDbsRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


  protected:
    std::shared_ptr<int64_t> limit_ = nullptr;
    std::shared_ptr<int64_t> offset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
