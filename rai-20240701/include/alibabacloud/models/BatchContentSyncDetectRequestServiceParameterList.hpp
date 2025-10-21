// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCONTENTSYNCDETECTREQUESTSERVICEPARAMETERLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCONTENTSYNCDETECTREQUESTSERVICEPARAMETERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class BatchContentSyncDetectRequestServiceParameterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchContentSyncDetectRequestServiceParameterList& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
    };
    friend void from_json(const Darabonba::Json& j, BatchContentSyncDetectRequestServiceParameterList& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
    };
    BatchContentSyncDetectRequestServiceParameterList() = default ;
    BatchContentSyncDetectRequestServiceParameterList(const BatchContentSyncDetectRequestServiceParameterList &) = default ;
    BatchContentSyncDetectRequestServiceParameterList(BatchContentSyncDetectRequestServiceParameterList &&) = default ;
    BatchContentSyncDetectRequestServiceParameterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchContentSyncDetectRequestServiceParameterList() = default ;
    BatchContentSyncDetectRequestServiceParameterList& operator=(const BatchContentSyncDetectRequestServiceParameterList &) = default ;
    BatchContentSyncDetectRequestServiceParameterList& operator=(BatchContentSyncDetectRequestServiceParameterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline BatchContentSyncDetectRequestServiceParameterList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
