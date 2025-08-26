// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETRAINTICKETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETRAINTICKETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTrainTicketResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTrainTicketResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(DepartureStation, departureStation_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Seat, seat_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTrainTicketResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(DepartureStation, departureStation_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Seat, seat_);
    };
    RecognizeTrainTicketResponseBodyData() = default ;
    RecognizeTrainTicketResponseBodyData(const RecognizeTrainTicketResponseBodyData &) = default ;
    RecognizeTrainTicketResponseBodyData(RecognizeTrainTicketResponseBodyData &&) = default ;
    RecognizeTrainTicketResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTrainTicketResponseBodyData() = default ;
    RecognizeTrainTicketResponseBodyData& operator=(const RecognizeTrainTicketResponseBodyData &) = default ;
    RecognizeTrainTicketResponseBodyData& operator=(RecognizeTrainTicketResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->departureStation_ != nullptr && this->destination_ != nullptr && this->level_ != nullptr && this->name_ != nullptr && this->number_ != nullptr
        && this->price_ != nullptr && this->seat_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline RecognizeTrainTicketResponseBodyData& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // departureStation Field Functions 
    bool hasDepartureStation() const { return this->departureStation_ != nullptr;};
    void deleteDepartureStation() { this->departureStation_ = nullptr;};
    inline string departureStation() const { DARABONBA_PTR_GET_DEFAULT(departureStation_, "") };
    inline RecognizeTrainTicketResponseBodyData& setDepartureStation(string departureStation) { DARABONBA_PTR_SET_VALUE(departureStation_, departureStation) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline RecognizeTrainTicketResponseBodyData& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline RecognizeTrainTicketResponseBodyData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RecognizeTrainTicketResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline RecognizeTrainTicketResponseBodyData& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline float price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline RecognizeTrainTicketResponseBodyData& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // seat Field Functions 
    bool hasSeat() const { return this->seat_ != nullptr;};
    void deleteSeat() { this->seat_ = nullptr;};
    inline string seat() const { DARABONBA_PTR_GET_DEFAULT(seat_, "") };
    inline RecognizeTrainTicketResponseBodyData& setSeat(string seat) { DARABONBA_PTR_SET_VALUE(seat_, seat) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> departureStation_ = nullptr;
    std::shared_ptr<string> destination_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<float> price_ = nullptr;
    std::shared_ptr<string> seat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
