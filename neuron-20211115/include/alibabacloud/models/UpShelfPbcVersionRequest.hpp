// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSHELFPBCVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSHELFPBCVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpShelfPbcVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpShelfPbcVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
    };
    friend void from_json(const Darabonba::Json& j, UpShelfPbcVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
    };
    UpShelfPbcVersionRequest() = default ;
    UpShelfPbcVersionRequest(const UpShelfPbcVersionRequest &) = default ;
    UpShelfPbcVersionRequest(UpShelfPbcVersionRequest &&) = default ;
    UpShelfPbcVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpShelfPbcVersionRequest() = default ;
    UpShelfPbcVersionRequest& operator=(const UpShelfPbcVersionRequest &) = default ;
    UpShelfPbcVersionRequest& operator=(UpShelfPbcVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->marketId_ == nullptr; };
    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline UpShelfPbcVersionRequest& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> marketId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
