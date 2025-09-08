// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERSOURCELOGCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERSOURCELOGCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class AddUserSourceLogConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserSourceLogConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DiplayLine, diplayLine_);
      DARABONBA_PTR_TO_JSON(Displayed, displayed_);
      DARABONBA_PTR_TO_JSON(Imported, imported_);
      DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
      DARABONBA_PTR_TO_JSON(SourceLogCode, sourceLogCode_);
      DARABONBA_PTR_TO_JSON(SourceProdCode, sourceProdCode_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_TO_JSON(SubUserName, subUserName_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserSourceLogConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DiplayLine, diplayLine_);
      DARABONBA_PTR_FROM_JSON(Displayed, displayed_);
      DARABONBA_PTR_FROM_JSON(Imported, imported_);
      DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
      DARABONBA_PTR_FROM_JSON(SourceLogCode, sourceLogCode_);
      DARABONBA_PTR_FROM_JSON(SourceProdCode, sourceProdCode_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_FROM_JSON(SubUserName, subUserName_);
    };
    AddUserSourceLogConfigResponseBodyData() = default ;
    AddUserSourceLogConfigResponseBodyData(const AddUserSourceLogConfigResponseBodyData &) = default ;
    AddUserSourceLogConfigResponseBodyData(AddUserSourceLogConfigResponseBodyData &&) = default ;
    AddUserSourceLogConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserSourceLogConfigResponseBodyData() = default ;
    AddUserSourceLogConfigResponseBodyData& operator=(const AddUserSourceLogConfigResponseBodyData &) = default ;
    AddUserSourceLogConfigResponseBodyData& operator=(AddUserSourceLogConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diplayLine_ != nullptr
        && this->displayed_ != nullptr && this->imported_ != nullptr && this->mainUserId_ != nullptr && this->sourceLogCode_ != nullptr && this->sourceProdCode_ != nullptr
        && this->subUserId_ != nullptr && this->subUserName_ != nullptr; };
    // diplayLine Field Functions 
    bool hasDiplayLine() const { return this->diplayLine_ != nullptr;};
    void deleteDiplayLine() { this->diplayLine_ = nullptr;};
    inline string diplayLine() const { DARABONBA_PTR_GET_DEFAULT(diplayLine_, "") };
    inline AddUserSourceLogConfigResponseBodyData& setDiplayLine(string diplayLine) { DARABONBA_PTR_SET_VALUE(diplayLine_, diplayLine) };


    // displayed Field Functions 
    bool hasDisplayed() const { return this->displayed_ != nullptr;};
    void deleteDisplayed() { this->displayed_ = nullptr;};
    inline bool displayed() const { DARABONBA_PTR_GET_DEFAULT(displayed_, false) };
    inline AddUserSourceLogConfigResponseBodyData& setDisplayed(bool displayed) { DARABONBA_PTR_SET_VALUE(displayed_, displayed) };


    // imported Field Functions 
    bool hasImported() const { return this->imported_ != nullptr;};
    void deleteImported() { this->imported_ = nullptr;};
    inline bool imported() const { DARABONBA_PTR_GET_DEFAULT(imported_, false) };
    inline AddUserSourceLogConfigResponseBodyData& setImported(bool imported) { DARABONBA_PTR_SET_VALUE(imported_, imported) };


    // mainUserId Field Functions 
    bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
    void deleteMainUserId() { this->mainUserId_ = nullptr;};
    inline int64_t mainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
    inline AddUserSourceLogConfigResponseBodyData& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


    // sourceLogCode Field Functions 
    bool hasSourceLogCode() const { return this->sourceLogCode_ != nullptr;};
    void deleteSourceLogCode() { this->sourceLogCode_ = nullptr;};
    inline string sourceLogCode() const { DARABONBA_PTR_GET_DEFAULT(sourceLogCode_, "") };
    inline AddUserSourceLogConfigResponseBodyData& setSourceLogCode(string sourceLogCode) { DARABONBA_PTR_SET_VALUE(sourceLogCode_, sourceLogCode) };


    // sourceProdCode Field Functions 
    bool hasSourceProdCode() const { return this->sourceProdCode_ != nullptr;};
    void deleteSourceProdCode() { this->sourceProdCode_ = nullptr;};
    inline string sourceProdCode() const { DARABONBA_PTR_GET_DEFAULT(sourceProdCode_, "") };
    inline AddUserSourceLogConfigResponseBodyData& setSourceProdCode(string sourceProdCode) { DARABONBA_PTR_SET_VALUE(sourceProdCode_, sourceProdCode) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline AddUserSourceLogConfigResponseBodyData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    // subUserName Field Functions 
    bool hasSubUserName() const { return this->subUserName_ != nullptr;};
    void deleteSubUserName() { this->subUserName_ = nullptr;};
    inline string subUserName() const { DARABONBA_PTR_GET_DEFAULT(subUserName_, "") };
    inline AddUserSourceLogConfigResponseBodyData& setSubUserName(string subUserName) { DARABONBA_PTR_SET_VALUE(subUserName_, subUserName) };


  protected:
    // The display details of the Logstore.
    std::shared_ptr<string> diplayLine_ = nullptr;
    // Indicates whether the details of added logs are returned. Valid values: true false
    std::shared_ptr<bool> displayed_ = nullptr;
    // Indicates whether the logs are added to the threat analysis feature. Valid values: true false
    std::shared_ptr<bool> imported_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
    std::shared_ptr<int64_t> mainUserId_ = nullptr;
    // The log code.
    std::shared_ptr<string> sourceLogCode_ = nullptr;
    // The code of the cloud service.
    std::shared_ptr<string> sourceProdCode_ = nullptr;
    // The ID of the Alibaba Cloud account that can be used to perform operations supported by the threat analysis feature.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
    // The username of the Alibaba Cloud account that can be used to perform operations supported by the threat analysis feature.
    std::shared_ptr<string> subUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
