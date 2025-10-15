// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateDialogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDialogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(openingRemarks, openingRemarks_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDialogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(openingRemarks, openingRemarks_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    CreateDialogResponseBodyData() = default ;
    CreateDialogResponseBodyData(const CreateDialogResponseBodyData &) = default ;
    CreateDialogResponseBodyData(CreateDialogResponseBodyData &&) = default ;
    CreateDialogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDialogResponseBodyData() = default ;
    CreateDialogResponseBodyData& operator=(const CreateDialogResponseBodyData &) = default ;
    CreateDialogResponseBodyData& operator=(CreateDialogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openingRemarks_ == nullptr
        && return this->sessionId_ == nullptr; };
    // openingRemarks Field Functions 
    bool hasOpeningRemarks() const { return this->openingRemarks_ != nullptr;};
    void deleteOpeningRemarks() { this->openingRemarks_ = nullptr;};
    inline string openingRemarks() const { DARABONBA_PTR_GET_DEFAULT(openingRemarks_, "") };
    inline CreateDialogResponseBodyData& setOpeningRemarks(string openingRemarks) { DARABONBA_PTR_SET_VALUE(openingRemarks_, openingRemarks) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateDialogResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> openingRemarks_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
