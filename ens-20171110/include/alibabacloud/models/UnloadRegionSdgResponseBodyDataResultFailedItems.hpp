// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOADREGIONSDGRESPONSEBODYDATARESULTFAILEDITEMS_HPP_
#define ALIBABACLOUD_MODELS_UNLOADREGIONSDGRESPONSEBODYDATARESULTFAILEDITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnloadRegionSDGResponseBodyDataResultFailedItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnloadRegionSDGResponseBodyDataResultFailedItems& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
    };
    friend void from_json(const Darabonba::Json& j, UnloadRegionSDGResponseBodyDataResultFailedItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
    };
    UnloadRegionSDGResponseBodyDataResultFailedItems() = default ;
    UnloadRegionSDGResponseBodyDataResultFailedItems(const UnloadRegionSDGResponseBodyDataResultFailedItems &) = default ;
    UnloadRegionSDGResponseBodyDataResultFailedItems(UnloadRegionSDGResponseBodyDataResultFailedItems &&) = default ;
    UnloadRegionSDGResponseBodyDataResultFailedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnloadRegionSDGResponseBodyDataResultFailedItems() = default ;
    UnloadRegionSDGResponseBodyDataResultFailedItems& operator=(const UnloadRegionSDGResponseBodyDataResultFailedItems &) = default ;
    UnloadRegionSDGResponseBodyDataResultFailedItems& operator=(UnloadRegionSDGResponseBodyDataResultFailedItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationRegionId_ == nullptr
        && return this->errorMessage_ == nullptr; };
    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline string destinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
    inline UnloadRegionSDGResponseBodyDataResultFailedItems& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UnloadRegionSDGResponseBodyDataResultFailedItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


  protected:
    // The ID of the destination node.
    std::shared_ptr<string> destinationRegionId_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
