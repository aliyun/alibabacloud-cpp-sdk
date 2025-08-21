// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADREGIONSDGRESPONSEBODYDATARESULTFAILEDITEMS_HPP_
#define ALIBABACLOUD_MODELS_PRELOADREGIONSDGRESPONSEBODYDATARESULTFAILEDITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PreloadRegionSDGResponseBodyDataResultFailedItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadRegionSDGResponseBodyDataResultFailedItems& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadRegionSDGResponseBodyDataResultFailedItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
    };
    PreloadRegionSDGResponseBodyDataResultFailedItems() = default ;
    PreloadRegionSDGResponseBodyDataResultFailedItems(const PreloadRegionSDGResponseBodyDataResultFailedItems &) = default ;
    PreloadRegionSDGResponseBodyDataResultFailedItems(PreloadRegionSDGResponseBodyDataResultFailedItems &&) = default ;
    PreloadRegionSDGResponseBodyDataResultFailedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadRegionSDGResponseBodyDataResultFailedItems() = default ;
    PreloadRegionSDGResponseBodyDataResultFailedItems& operator=(const PreloadRegionSDGResponseBodyDataResultFailedItems &) = default ;
    PreloadRegionSDGResponseBodyDataResultFailedItems& operator=(PreloadRegionSDGResponseBodyDataResultFailedItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationRegionId_ != nullptr
        && this->errorMessage_ != nullptr; };
    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline string destinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
    inline PreloadRegionSDGResponseBodyDataResultFailedItems& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline PreloadRegionSDGResponseBodyDataResultFailedItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


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
