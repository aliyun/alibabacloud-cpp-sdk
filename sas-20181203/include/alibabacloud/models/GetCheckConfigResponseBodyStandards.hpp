// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCONFIGRESPONSEBODYSTANDARDS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCONFIGRESPONSEBODYSTANDARDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckConfigResponseBodyStandards : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckConfigResponseBodyStandards& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckConfigResponseBodyStandards& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetCheckConfigResponseBodyStandards() = default ;
    GetCheckConfigResponseBodyStandards(const GetCheckConfigResponseBodyStandards &) = default ;
    GetCheckConfigResponseBodyStandards(GetCheckConfigResponseBodyStandards &&) = default ;
    GetCheckConfigResponseBodyStandards(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckConfigResponseBodyStandards() = default ;
    GetCheckConfigResponseBodyStandards& operator=(const GetCheckConfigResponseBodyStandards &) = default ;
    GetCheckConfigResponseBodyStandards& operator=(GetCheckConfigResponseBodyStandards &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->showName_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetCheckConfigResponseBodyStandards& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline GetCheckConfigResponseBodyStandards& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCheckConfigResponseBodyStandards& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCheckConfigResponseBodyStandards& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the check item.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> showName_ = nullptr;
    // The status of the check item. Valid values:
    // 
    // *   **ON**: The check item is enabled.
    // *   **OFF**: The check item is disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the check item. Valid values:
    // 
    // *   **RISK**: cloud service configuration management
    // *   **IDENTITY_PERMISSION**: identity and permission management
    // *   **COMPLIANCE**: compliance
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
