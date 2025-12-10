// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSOCIATEDTRANSFERSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSOCIATEDTRANSFERSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListAssociatedTransferSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssociatedTransferSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedTransferSetting, associatedTransferSetting_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssociatedTransferSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedTransferSetting, associatedTransferSetting_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAssociatedTransferSettingResponseBody() = default ;
    ListAssociatedTransferSettingResponseBody(const ListAssociatedTransferSettingResponseBody &) = default ;
    ListAssociatedTransferSettingResponseBody(ListAssociatedTransferSettingResponseBody &&) = default ;
    ListAssociatedTransferSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssociatedTransferSettingResponseBody() = default ;
    ListAssociatedTransferSettingResponseBody& operator=(const ListAssociatedTransferSettingResponseBody &) = default ;
    ListAssociatedTransferSettingResponseBody& operator=(ListAssociatedTransferSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedTransferSetting_ == nullptr
        && return this->requestId_ == nullptr; };
    // associatedTransferSetting Field Functions 
    bool hasAssociatedTransferSetting() const { return this->associatedTransferSetting_ != nullptr;};
    void deleteAssociatedTransferSetting() { this->associatedTransferSetting_ = nullptr;};
    inline const ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting & associatedTransferSetting() const { DARABONBA_PTR_GET_CONST(associatedTransferSetting_, ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting) };
    inline ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting associatedTransferSetting() { DARABONBA_PTR_GET(associatedTransferSetting_, ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting) };
    inline ListAssociatedTransferSettingResponseBody& setAssociatedTransferSetting(const ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting & associatedTransferSetting) { DARABONBA_PTR_SET_VALUE(associatedTransferSetting_, associatedTransferSetting) };
    inline ListAssociatedTransferSettingResponseBody& setAssociatedTransferSetting(ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting && associatedTransferSetting) { DARABONBA_PTR_SET_RVALUE(associatedTransferSetting_, associatedTransferSetting) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssociatedTransferSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The settings of the Transfer Associated Resources feature.
    std::shared_ptr<ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting> associatedTransferSetting_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
