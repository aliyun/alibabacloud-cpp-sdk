// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INPUTFILEFIGURES_HPP_
#define ALIBABACLOUD_MODELS_INPUTFILEFIGURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class InputFileFigures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputFileFigures& obj) { 
      DARABONBA_PTR_TO_JSON(FigureClusterId, figureClusterId_);
      DARABONBA_PTR_TO_JSON(FigureId, figureId_);
      DARABONBA_PTR_TO_JSON(FigureType, figureType_);
    };
    friend void from_json(const Darabonba::Json& j, InputFileFigures& obj) { 
      DARABONBA_PTR_FROM_JSON(FigureClusterId, figureClusterId_);
      DARABONBA_PTR_FROM_JSON(FigureId, figureId_);
      DARABONBA_PTR_FROM_JSON(FigureType, figureType_);
    };
    InputFileFigures() = default ;
    InputFileFigures(const InputFileFigures &) = default ;
    InputFileFigures(InputFileFigures &&) = default ;
    InputFileFigures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputFileFigures() = default ;
    InputFileFigures& operator=(const InputFileFigures &) = default ;
    InputFileFigures& operator=(InputFileFigures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->figureClusterId_ != nullptr
        && this->figureId_ != nullptr && this->figureType_ != nullptr; };
    // figureClusterId Field Functions 
    bool hasFigureClusterId() const { return this->figureClusterId_ != nullptr;};
    void deleteFigureClusterId() { this->figureClusterId_ = nullptr;};
    inline string figureClusterId() const { DARABONBA_PTR_GET_DEFAULT(figureClusterId_, "") };
    inline InputFileFigures& setFigureClusterId(string figureClusterId) { DARABONBA_PTR_SET_VALUE(figureClusterId_, figureClusterId) };


    // figureId Field Functions 
    bool hasFigureId() const { return this->figureId_ != nullptr;};
    void deleteFigureId() { this->figureId_ = nullptr;};
    inline string figureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
    inline InputFileFigures& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


    // figureType Field Functions 
    bool hasFigureType() const { return this->figureType_ != nullptr;};
    void deleteFigureType() { this->figureType_ = nullptr;};
    inline string figureType() const { DARABONBA_PTR_GET_DEFAULT(figureType_, "") };
    inline InputFileFigures& setFigureType(string figureType) { DARABONBA_PTR_SET_VALUE(figureType_, figureType) };


  protected:
    std::shared_ptr<string> figureClusterId_ = nullptr;
    std::shared_ptr<string> figureId_ = nullptr;
    std::shared_ptr<string> figureType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
