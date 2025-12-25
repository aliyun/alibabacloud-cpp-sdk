// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSINGLECONNDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSINGLECONNDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetSingleConnDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSingleConnDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SubSceneId, subSceneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSingleConnDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SubSceneId, subSceneId_);
    };
    GetSingleConnDataRequest() = default ;
    GetSingleConnDataRequest(const GetSingleConnDataRequest &) = default ;
    GetSingleConnDataRequest(GetSingleConnDataRequest &&) = default ;
    GetSingleConnDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSingleConnDataRequest() = default ;
    GetSingleConnDataRequest& operator=(const GetSingleConnDataRequest &) = default ;
    GetSingleConnDataRequest& operator=(GetSingleConnDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subSceneId_ == nullptr; };
    // subSceneId Field Functions 
    bool hasSubSceneId() const { return this->subSceneId_ != nullptr;};
    void deleteSubSceneId() { this->subSceneId_ = nullptr;};
    inline string subSceneId() const { DARABONBA_PTR_GET_DEFAULT(subSceneId_, "") };
    inline GetSingleConnDataRequest& setSubSceneId(string subSceneId) { DARABONBA_PTR_SET_VALUE(subSceneId_, subSceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> subSceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
