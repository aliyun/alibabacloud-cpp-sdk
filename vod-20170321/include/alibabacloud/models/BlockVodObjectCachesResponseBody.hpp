// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BLOCKVODOBJECTCACHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BLOCKVODOBJECTCACHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class BlockVodObjectCachesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BlockVodObjectCachesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BlockTaskId, blockTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BlockVodObjectCachesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockTaskId, blockTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BlockVodObjectCachesResponseBody() = default ;
    BlockVodObjectCachesResponseBody(const BlockVodObjectCachesResponseBody &) = default ;
    BlockVodObjectCachesResponseBody(BlockVodObjectCachesResponseBody &&) = default ;
    BlockVodObjectCachesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BlockVodObjectCachesResponseBody() = default ;
    BlockVodObjectCachesResponseBody& operator=(const BlockVodObjectCachesResponseBody &) = default ;
    BlockVodObjectCachesResponseBody& operator=(BlockVodObjectCachesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockTaskId_ != nullptr
        && this->requestId_ != nullptr; };
    // blockTaskId Field Functions 
    bool hasBlockTaskId() const { return this->blockTaskId_ != nullptr;};
    void deleteBlockTaskId() { this->blockTaskId_ = nullptr;};
    inline string blockTaskId() const { DARABONBA_PTR_GET_DEFAULT(blockTaskId_, "") };
    inline BlockVodObjectCachesResponseBody& setBlockTaskId(string blockTaskId) { DARABONBA_PTR_SET_VALUE(blockTaskId_, blockTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BlockVodObjectCachesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> blockTaskId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
