// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRECALLPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHRECALLPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchRecallPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRecallPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutBizIds, outBizIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRecallPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutBizIds, outBizIds_);
    };
    BatchRecallPushRequest() = default ;
    BatchRecallPushRequest(const BatchRecallPushRequest &) = default ;
    BatchRecallPushRequest(BatchRecallPushRequest &&) = default ;
    BatchRecallPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRecallPushRequest() = default ;
    BatchRecallPushRequest& operator=(const BatchRecallPushRequest &) = default ;
    BatchRecallPushRequest& operator=(BatchRecallPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outBizIds_ == nullptr; };
    // outBizIds Field Functions 
    bool hasOutBizIds() const { return this->outBizIds_ != nullptr;};
    void deleteOutBizIds() { this->outBizIds_ = nullptr;};
    inline const vector<string> & outBizIds() const { DARABONBA_PTR_GET_CONST(outBizIds_, vector<string>) };
    inline vector<string> outBizIds() { DARABONBA_PTR_GET(outBizIds_, vector<string>) };
    inline BatchRecallPushRequest& setOutBizIds(const vector<string> & outBizIds) { DARABONBA_PTR_SET_VALUE(outBizIds_, outBizIds) };
    inline BatchRecallPushRequest& setOutBizIds(vector<string> && outBizIds) { DARABONBA_PTR_SET_RVALUE(outBizIds_, outBizIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> outBizIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
