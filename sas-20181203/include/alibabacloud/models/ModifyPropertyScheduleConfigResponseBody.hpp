// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPROPERTYSCHEDULECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPROPERTYSCHEDULECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyPropertyScheduleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPropertyScheduleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyResult, modifyResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPropertyScheduleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyResult, modifyResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyPropertyScheduleConfigResponseBody() = default ;
    ModifyPropertyScheduleConfigResponseBody(const ModifyPropertyScheduleConfigResponseBody &) = default ;
    ModifyPropertyScheduleConfigResponseBody(ModifyPropertyScheduleConfigResponseBody &&) = default ;
    ModifyPropertyScheduleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPropertyScheduleConfigResponseBody() = default ;
    ModifyPropertyScheduleConfigResponseBody& operator=(const ModifyPropertyScheduleConfigResponseBody &) = default ;
    ModifyPropertyScheduleConfigResponseBody& operator=(ModifyPropertyScheduleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // modifyResult Field Functions 
    bool hasModifyResult() const { return this->modifyResult_ != nullptr;};
    void deleteModifyResult() { this->modifyResult_ = nullptr;};
    inline bool modifyResult() const { DARABONBA_PTR_GET_DEFAULT(modifyResult_, false) };
    inline ModifyPropertyScheduleConfigResponseBody& setModifyResult(bool modifyResult) { DARABONBA_PTR_SET_VALUE(modifyResult_, modifyResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyPropertyScheduleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the collection frequency of asset fingerprints is modified. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> modifyResult_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
