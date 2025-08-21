// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAUTHCODEBINDFOREXTRESPONSEBODYRESULTUSEROPENINFO_HPP_
#define ALIBABACLOUD_MODELS_CHECKAUTHCODEBINDFOREXTRESPONSEBODYRESULTUSEROPENINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
    };
    CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo() = default ;
    CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo(const CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo &) = default ;
    CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo(CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo &&) = default ;
    CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo() = default ;
    CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo& operator=(const CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo &) = default ;
    CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo& operator=(CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->idType_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string idType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    // USER_ID
    std::shared_ptr<string> idType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
