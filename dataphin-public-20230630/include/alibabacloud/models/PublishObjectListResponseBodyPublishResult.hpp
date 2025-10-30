// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTRESPONSEBODYPUBLISHRESULT_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTRESPONSEBODYPUBLISHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PublishObjectListResponseBodyPublishResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishObjectListResponseBodyPublishResult& obj) { 
      DARABONBA_PTR_TO_JSON(SubmitIdList, submitIdList_);
    };
    friend void from_json(const Darabonba::Json& j, PublishObjectListResponseBodyPublishResult& obj) { 
      DARABONBA_PTR_FROM_JSON(SubmitIdList, submitIdList_);
    };
    PublishObjectListResponseBodyPublishResult() = default ;
    PublishObjectListResponseBodyPublishResult(const PublishObjectListResponseBodyPublishResult &) = default ;
    PublishObjectListResponseBodyPublishResult(PublishObjectListResponseBodyPublishResult &&) = default ;
    PublishObjectListResponseBodyPublishResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishObjectListResponseBodyPublishResult() = default ;
    PublishObjectListResponseBodyPublishResult& operator=(const PublishObjectListResponseBodyPublishResult &) = default ;
    PublishObjectListResponseBodyPublishResult& operator=(PublishObjectListResponseBodyPublishResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->submitIdList_ == nullptr; };
    // submitIdList Field Functions 
    bool hasSubmitIdList() const { return this->submitIdList_ != nullptr;};
    void deleteSubmitIdList() { this->submitIdList_ = nullptr;};
    inline const vector<int64_t> & submitIdList() const { DARABONBA_PTR_GET_CONST(submitIdList_, vector<int64_t>) };
    inline vector<int64_t> submitIdList() { DARABONBA_PTR_GET(submitIdList_, vector<int64_t>) };
    inline PublishObjectListResponseBodyPublishResult& setSubmitIdList(const vector<int64_t> & submitIdList) { DARABONBA_PTR_SET_VALUE(submitIdList_, submitIdList) };
    inline PublishObjectListResponseBodyPublishResult& setSubmitIdList(vector<int64_t> && submitIdList) { DARABONBA_PTR_SET_RVALUE(submitIdList_, submitIdList) };


  protected:
    std::shared_ptr<vector<int64_t>> submitIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
