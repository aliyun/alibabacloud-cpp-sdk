// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTANDROIDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTANDROIDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class StartAndroidInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAndroidInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
    };
    friend void from_json(const Darabonba::Json& j, StartAndroidInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
    };
    StartAndroidInstanceRequest() = default ;
    StartAndroidInstanceRequest(const StartAndroidInstanceRequest &) = default ;
    StartAndroidInstanceRequest(StartAndroidInstanceRequest &&) = default ;
    StartAndroidInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAndroidInstanceRequest() = default ;
    StartAndroidInstanceRequest& operator=(const StartAndroidInstanceRequest &) = default ;
    StartAndroidInstanceRequest& operator=(StartAndroidInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->androidInstanceIds_ != nullptr
        && this->saleMode_ != nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & androidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> androidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline StartAndroidInstanceRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline StartAndroidInstanceRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string saleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline StartAndroidInstanceRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


  protected:
    // List of instances.
    std::shared_ptr<vector<string>> androidInstanceIds_ = nullptr;
    std::shared_ptr<string> saleMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
