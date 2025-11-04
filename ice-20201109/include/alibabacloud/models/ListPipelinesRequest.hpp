// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListPipelinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Speed, speed_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
    };
    ListPipelinesRequest() = default ;
    ListPipelinesRequest(const ListPipelinesRequest &) = default ;
    ListPipelinesRequest(ListPipelinesRequest &&) = default ;
    ListPipelinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesRequest() = default ;
    ListPipelinesRequest& operator=(const ListPipelinesRequest &) = default ;
    ListPipelinesRequest& operator=(ListPipelinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->speed_ == nullptr; };
    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline string speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
    inline ListPipelinesRequest& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


  protected:
    // The type of the MPS queue.
    // 
    // Valid values:
    // 
    // *   Boost: MPS queue with transcoding speed boosted.
    // *   Standard: standard MPS queue.
    // *   NarrowBandHDV2: MPS queue that supports Narrowband HD 2.0.
    std::shared_ptr<string> speed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
