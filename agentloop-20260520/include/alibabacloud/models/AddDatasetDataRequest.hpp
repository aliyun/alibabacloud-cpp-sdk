// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASETDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASETDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class AddDatasetDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDatasetDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataArray, dataArray_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, AddDatasetDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataArray, dataArray_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    AddDatasetDataRequest() = default ;
    AddDatasetDataRequest(const AddDatasetDataRequest &) = default ;
    AddDatasetDataRequest(AddDatasetDataRequest &&) = default ;
    AddDatasetDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDatasetDataRequest() = default ;
    AddDatasetDataRequest& operator=(const AddDatasetDataRequest &) = default ;
    AddDatasetDataRequest& operator=(AddDatasetDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataArray_ == nullptr
        && this->clientToken_ == nullptr; };
    // dataArray Field Functions 
    bool hasDataArray() const { return this->dataArray_ != nullptr;};
    void deleteDataArray() { this->dataArray_ = nullptr;};
    inline const vector<Darabonba::Json> & getDataArray() const { DARABONBA_PTR_GET_CONST(dataArray_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getDataArray() { DARABONBA_PTR_GET(dataArray_, vector<Darabonba::Json>) };
    inline AddDatasetDataRequest& setDataArray(const vector<Darabonba::Json> & dataArray) { DARABONBA_PTR_SET_VALUE(dataArray_, dataArray) };
    inline AddDatasetDataRequest& setDataArray(vector<Darabonba::Json> && dataArray) { DARABONBA_PTR_SET_RVALUE(dataArray_, dataArray) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddDatasetDataRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<vector<Darabonba::Json>> dataArray_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
