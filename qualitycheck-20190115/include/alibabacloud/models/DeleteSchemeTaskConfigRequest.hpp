// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCHEMETASKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCHEMETASKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class DeleteSchemeTaskConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSchemeTaskConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(jsonStr, jsonStr_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSchemeTaskConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(jsonStr, jsonStr_);
    };
    DeleteSchemeTaskConfigRequest() = default ;
    DeleteSchemeTaskConfigRequest(const DeleteSchemeTaskConfigRequest &) = default ;
    DeleteSchemeTaskConfigRequest(DeleteSchemeTaskConfigRequest &&) = default ;
    DeleteSchemeTaskConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSchemeTaskConfigRequest() = default ;
    DeleteSchemeTaskConfigRequest& operator=(const DeleteSchemeTaskConfigRequest &) = default ;
    DeleteSchemeTaskConfigRequest& operator=(DeleteSchemeTaskConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseMeAgentId_ != nullptr
        && this->jsonStr_ != nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline int64_t baseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, 0L) };
    inline DeleteSchemeTaskConfigRequest& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // jsonStr Field Functions 
    bool hasJsonStr() const { return this->jsonStr_ != nullptr;};
    void deleteJsonStr() { this->jsonStr_ = nullptr;};
    inline string jsonStr() const { DARABONBA_PTR_GET_DEFAULT(jsonStr_, "") };
    inline DeleteSchemeTaskConfigRequest& setJsonStr(string jsonStr) { DARABONBA_PTR_SET_VALUE(jsonStr_, jsonStr) };


  protected:
    // baseMeAgentId
    std::shared_ptr<int64_t> baseMeAgentId_ = nullptr;
    std::shared_ptr<string> jsonStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
