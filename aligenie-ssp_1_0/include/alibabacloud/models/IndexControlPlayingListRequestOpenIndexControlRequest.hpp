// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INDEXCONTROLPLAYINGLISTREQUESTOPENINDEXCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INDEXCONTROLPLAYINGLISTREQUESTOPENINDEXCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class IndexControlPlayingListRequestOpenIndexControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IndexControlPlayingListRequestOpenIndexControlRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(NeedContentContinued, needContentContinued_);
    };
    friend void from_json(const Darabonba::Json& j, IndexControlPlayingListRequestOpenIndexControlRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(NeedContentContinued, needContentContinued_);
    };
    IndexControlPlayingListRequestOpenIndexControlRequest() = default ;
    IndexControlPlayingListRequestOpenIndexControlRequest(const IndexControlPlayingListRequestOpenIndexControlRequest &) = default ;
    IndexControlPlayingListRequestOpenIndexControlRequest(IndexControlPlayingListRequestOpenIndexControlRequest &&) = default ;
    IndexControlPlayingListRequestOpenIndexControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IndexControlPlayingListRequestOpenIndexControlRequest() = default ;
    IndexControlPlayingListRequestOpenIndexControlRequest& operator=(const IndexControlPlayingListRequestOpenIndexControlRequest &) = default ;
    IndexControlPlayingListRequestOpenIndexControlRequest& operator=(IndexControlPlayingListRequestOpenIndexControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extendInfo_ != nullptr
        && this->index_ != nullptr && this->needContentContinued_ != nullptr; };
    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline     const Darabonba::Json & extendInfo() const { DARABONBA_GET(extendInfo_) };
    Darabonba::Json & extendInfo() { DARABONBA_GET(extendInfo_) };
    inline IndexControlPlayingListRequestOpenIndexControlRequest& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
    inline IndexControlPlayingListRequestOpenIndexControlRequest& setExtendInfo(Darabonba::Json & extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline IndexControlPlayingListRequestOpenIndexControlRequest& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // needContentContinued Field Functions 
    bool hasNeedContentContinued() const { return this->needContentContinued_ != nullptr;};
    void deleteNeedContentContinued() { this->needContentContinued_ = nullptr;};
    inline bool needContentContinued() const { DARABONBA_PTR_GET_DEFAULT(needContentContinued_, false) };
    inline IndexControlPlayingListRequestOpenIndexControlRequest& setNeedContentContinued(bool needContentContinued) { DARABONBA_PTR_SET_VALUE(needContentContinued_, needContentContinued) };


  protected:
    Darabonba::Json extendInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<bool> needContentContinued_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
