// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIGURECLUSTERFORREQCOVERFIGURES_HPP_
#define ALIBABACLOUD_MODELS_FIGURECLUSTERFORREQCOVERFIGURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class FigureClusterForReqCoverFigures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FigureClusterForReqCoverFigures& obj) { 
      DARABONBA_PTR_TO_JSON(FigureId, figureId_);
    };
    friend void from_json(const Darabonba::Json& j, FigureClusterForReqCoverFigures& obj) { 
      DARABONBA_PTR_FROM_JSON(FigureId, figureId_);
    };
    FigureClusterForReqCoverFigures() = default ;
    FigureClusterForReqCoverFigures(const FigureClusterForReqCoverFigures &) = default ;
    FigureClusterForReqCoverFigures(FigureClusterForReqCoverFigures &&) = default ;
    FigureClusterForReqCoverFigures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FigureClusterForReqCoverFigures() = default ;
    FigureClusterForReqCoverFigures& operator=(const FigureClusterForReqCoverFigures &) = default ;
    FigureClusterForReqCoverFigures& operator=(FigureClusterForReqCoverFigures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->figureId_ != nullptr; };
    // figureId Field Functions 
    bool hasFigureId() const { return this->figureId_ != nullptr;};
    void deleteFigureId() { this->figureId_ = nullptr;};
    inline string figureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
    inline FigureClusterForReqCoverFigures& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


  protected:
    std::shared_ptr<string> figureId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
