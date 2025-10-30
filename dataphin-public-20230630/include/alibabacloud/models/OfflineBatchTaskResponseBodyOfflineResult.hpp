// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEBATCHTASKRESPONSEBODYOFFLINERESULT_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEBATCHTASKRESPONSEBODYOFFLINERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OfflineBatchTaskResponseBodyOfflineResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineBatchTaskResponseBodyOfflineResult& obj) { 
      DARABONBA_PTR_TO_JSON(PublishObjectId, publishObjectId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineBatchTaskResponseBodyOfflineResult& obj) { 
      DARABONBA_PTR_FROM_JSON(PublishObjectId, publishObjectId_);
    };
    OfflineBatchTaskResponseBodyOfflineResult() = default ;
    OfflineBatchTaskResponseBodyOfflineResult(const OfflineBatchTaskResponseBodyOfflineResult &) = default ;
    OfflineBatchTaskResponseBodyOfflineResult(OfflineBatchTaskResponseBodyOfflineResult &&) = default ;
    OfflineBatchTaskResponseBodyOfflineResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineBatchTaskResponseBodyOfflineResult() = default ;
    OfflineBatchTaskResponseBodyOfflineResult& operator=(const OfflineBatchTaskResponseBodyOfflineResult &) = default ;
    OfflineBatchTaskResponseBodyOfflineResult& operator=(OfflineBatchTaskResponseBodyOfflineResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->publishObjectId_ == nullptr; };
    // publishObjectId Field Functions 
    bool hasPublishObjectId() const { return this->publishObjectId_ != nullptr;};
    void deletePublishObjectId() { this->publishObjectId_ = nullptr;};
    inline int64_t publishObjectId() const { DARABONBA_PTR_GET_DEFAULT(publishObjectId_, 0L) };
    inline OfflineBatchTaskResponseBodyOfflineResult& setPublishObjectId(int64_t publishObjectId) { DARABONBA_PTR_SET_VALUE(publishObjectId_, publishObjectId) };


  protected:
    std::shared_ptr<int64_t> publishObjectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
