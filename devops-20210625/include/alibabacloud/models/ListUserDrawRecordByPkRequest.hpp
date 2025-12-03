// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDRAWRECORDBYPKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDRAWRECORDBYPKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListUserDrawRecordByPkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDrawRecordByPkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(drawGroup, drawGroup_);
      DARABONBA_PTR_TO_JSON(drawPoolName, drawPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDrawRecordByPkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(drawGroup, drawGroup_);
      DARABONBA_PTR_FROM_JSON(drawPoolName, drawPoolName_);
    };
    ListUserDrawRecordByPkRequest() = default ;
    ListUserDrawRecordByPkRequest(const ListUserDrawRecordByPkRequest &) = default ;
    ListUserDrawRecordByPkRequest(ListUserDrawRecordByPkRequest &&) = default ;
    ListUserDrawRecordByPkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDrawRecordByPkRequest() = default ;
    ListUserDrawRecordByPkRequest& operator=(const ListUserDrawRecordByPkRequest &) = default ;
    ListUserDrawRecordByPkRequest& operator=(ListUserDrawRecordByPkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && return this->drawGroup_ == nullptr && return this->drawPoolName_ == nullptr; };
    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline ListUserDrawRecordByPkRequest& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // drawGroup Field Functions 
    bool hasDrawGroup() const { return this->drawGroup_ != nullptr;};
    void deleteDrawGroup() { this->drawGroup_ = nullptr;};
    inline string drawGroup() const { DARABONBA_PTR_GET_DEFAULT(drawGroup_, "") };
    inline ListUserDrawRecordByPkRequest& setDrawGroup(string drawGroup) { DARABONBA_PTR_SET_VALUE(drawGroup_, drawGroup) };


    // drawPoolName Field Functions 
    bool hasDrawPoolName() const { return this->drawPoolName_ != nullptr;};
    void deleteDrawPoolName() { this->drawPoolName_ = nullptr;};
    inline string drawPoolName() const { DARABONBA_PTR_GET_DEFAULT(drawPoolName_, "") };
    inline ListUserDrawRecordByPkRequest& setDrawPoolName(string drawPoolName) { DARABONBA_PTR_SET_VALUE(drawPoolName_, drawPoolName) };


  protected:
    std::shared_ptr<string> aliyunPk_ = nullptr;
    std::shared_ptr<string> drawGroup_ = nullptr;
    std::shared_ptr<string> drawPoolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
