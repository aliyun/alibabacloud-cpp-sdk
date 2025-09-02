// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETATABLEINTROWIKIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETATABLEINTROWIKIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateMetaTableIntroWikiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaTableIntroWikiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpdateResult, updateResult_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaTableIntroWikiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpdateResult, updateResult_);
    };
    UpdateMetaTableIntroWikiResponseBody() = default ;
    UpdateMetaTableIntroWikiResponseBody(const UpdateMetaTableIntroWikiResponseBody &) = default ;
    UpdateMetaTableIntroWikiResponseBody(UpdateMetaTableIntroWikiResponseBody &&) = default ;
    UpdateMetaTableIntroWikiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaTableIntroWikiResponseBody() = default ;
    UpdateMetaTableIntroWikiResponseBody& operator=(const UpdateMetaTableIntroWikiResponseBody &) = default ;
    UpdateMetaTableIntroWikiResponseBody& operator=(UpdateMetaTableIntroWikiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->updateResult_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMetaTableIntroWikiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // updateResult Field Functions 
    bool hasUpdateResult() const { return this->updateResult_ != nullptr;};
    void deleteUpdateResult() { this->updateResult_ = nullptr;};
    inline bool updateResult() const { DARABONBA_PTR_GET_DEFAULT(updateResult_, false) };
    inline UpdateMetaTableIntroWikiResponseBody& setUpdateResult(bool updateResult) { DARABONBA_PTR_SET_VALUE(updateResult_, updateResult) };


  protected:
    // The request ID. You can troubleshoot issues based on the ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the instructions on how to use the table are updated.
    std::shared_ptr<bool> updateResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
