// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
    };
    GetRegionRequest() = default ;
    GetRegionRequest(const GetRegionRequest &) = default ;
    GetRegionRequest(GetRegionRequest &&) = default ;
    GetRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionRequest() = default ;
    GetRegionRequest& operator=(const GetRegionRequest &) = default ;
    GetRegionRequest& operator=(GetRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputRegionId_ == nullptr; };
    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline GetRegionRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
