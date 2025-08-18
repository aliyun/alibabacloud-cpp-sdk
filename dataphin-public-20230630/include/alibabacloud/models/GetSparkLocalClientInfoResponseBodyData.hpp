// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKLOCALCLIENTINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKLOCALCLIENTINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSparkLocalClientInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkLocalClientInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClientFileResourceId, clientFileResourceId_);
      DARABONBA_PTR_TO_JSON(ClientFileResourceName, clientFileResourceName_);
      DARABONBA_PTR_TO_JSON(ClientName, clientName_);
      DARABONBA_PTR_TO_JSON(Editable, editable_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkLocalClientInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientFileResourceId, clientFileResourceId_);
      DARABONBA_PTR_FROM_JSON(ClientFileResourceName, clientFileResourceName_);
      DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
      DARABONBA_PTR_FROM_JSON(Editable, editable_);
    };
    GetSparkLocalClientInfoResponseBodyData() = default ;
    GetSparkLocalClientInfoResponseBodyData(const GetSparkLocalClientInfoResponseBodyData &) = default ;
    GetSparkLocalClientInfoResponseBodyData(GetSparkLocalClientInfoResponseBodyData &&) = default ;
    GetSparkLocalClientInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkLocalClientInfoResponseBodyData() = default ;
    GetSparkLocalClientInfoResponseBodyData& operator=(const GetSparkLocalClientInfoResponseBodyData &) = default ;
    GetSparkLocalClientInfoResponseBodyData& operator=(GetSparkLocalClientInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientFileResourceId_ != nullptr
        && this->clientFileResourceName_ != nullptr && this->clientName_ != nullptr && this->editable_ != nullptr; };
    // clientFileResourceId Field Functions 
    bool hasClientFileResourceId() const { return this->clientFileResourceId_ != nullptr;};
    void deleteClientFileResourceId() { this->clientFileResourceId_ = nullptr;};
    inline string clientFileResourceId() const { DARABONBA_PTR_GET_DEFAULT(clientFileResourceId_, "") };
    inline GetSparkLocalClientInfoResponseBodyData& setClientFileResourceId(string clientFileResourceId) { DARABONBA_PTR_SET_VALUE(clientFileResourceId_, clientFileResourceId) };


    // clientFileResourceName Field Functions 
    bool hasClientFileResourceName() const { return this->clientFileResourceName_ != nullptr;};
    void deleteClientFileResourceName() { this->clientFileResourceName_ = nullptr;};
    inline string clientFileResourceName() const { DARABONBA_PTR_GET_DEFAULT(clientFileResourceName_, "") };
    inline GetSparkLocalClientInfoResponseBodyData& setClientFileResourceName(string clientFileResourceName) { DARABONBA_PTR_SET_VALUE(clientFileResourceName_, clientFileResourceName) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string clientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline GetSparkLocalClientInfoResponseBodyData& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // editable Field Functions 
    bool hasEditable() const { return this->editable_ != nullptr;};
    void deleteEditable() { this->editable_ = nullptr;};
    inline bool editable() const { DARABONBA_PTR_GET_DEFAULT(editable_, false) };
    inline GetSparkLocalClientInfoResponseBodyData& setEditable(bool editable) { DARABONBA_PTR_SET_VALUE(editable_, editable) };


  protected:
    std::shared_ptr<string> clientFileResourceId_ = nullptr;
    std::shared_ptr<string> clientFileResourceName_ = nullptr;
    std::shared_ptr<string> clientName_ = nullptr;
    std::shared_ptr<bool> editable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
